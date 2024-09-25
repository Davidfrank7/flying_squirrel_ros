import ahrs
import numpy as np

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu

class IMU_estimator(Node):
    def __init__(self):
        super().__init__('estimator_node')

        # 创建发布者，发布 'imu/data' 话题

        self.imu_publisher = self.create_publisher(Imu, 'imu/data', 10)
        
        # 创建订阅者，订阅 'imu_raw' 话题
        self.imu_subscription = self.create_subscription(
            Imu,
            'imu/data_raw', 
            self.imu_callback,
            10)
        
        self.imu_subscription  # 防止订阅者被垃圾回收

        # defalut update rate is 5Hz
        # Earth frame is ENU
        self.filter = ahrs.filters.EKF(frame='ENU', freq=5.0)

        self.last_timestamp = None
        self.last_orientation = None # initial quaternion
        self.initialized = False # whether the filter has been initialized


    def imu_callback(self, msg):

        current_timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9

        # initialize the filter
        if not self.initialized:
            self.last_timestamp = current_timestamp
            self.last_orientation = ahrs.common.orientation.acc2q([msg.linear_acceleration.x, msg.linear_acceleration.y, msg.linear_acceleration.z])
            self.initialized = True
            return

        # calculate dt
        dt = current_timestamp - self.last_timestamp
        self.last_timestamp = current_timestamp

        acc_data = np.array([msg.linear_acceleration.x, msg.linear_acceleration.y, msg.linear_acceleration.z])
        gyro_data = np.array([msg.angular_velocity.x, msg.angular_velocity.y, msg.angular_velocity.z])

        self.get_logger().debug('Received IMU Data:')
        self.get_logger().debug(f'Orientation: x={msg.orientation.x}, y={msg.orientation.y}, z={msg.orientation.z}, w={msg.orientation.w}')
        self.get_logger().debug(f'Angular velocity: x={msg.angular_velocity.x}, y={msg.angular_velocity.y}, z={msg.angular_velocity.z}')
        self.get_logger().debug(f'Linear acceleration: x={msg.linear_acceleration.x}, y={msg.linear_acceleration.y}, z={msg.linear_acceleration.z}')

        # update the filter
        self.filter.Dt = dt
        q = self.filter.update(self.last_orientation, gyro_data, acc_data)

        # publish the orientation
        imu_msg = Imu()
        imu_msg.header.stamp = self.get_clock().now().to_msg()
        imu_msg.header.frame_id = 'imu_frame'
        imu_msg.linear_acceleration.x = msg.linear_acceleration.x
        imu_msg.linear_acceleration.y = msg.linear_acceleration.y
        imu_msg.linear_acceleration.z = msg.linear_acceleration.z
        imu_msg.angular_velocity.x = msg.angular_velocity.x
        imu_msg.angular_velocity.y = msg.angular_velocity.y
        imu_msg.angular_velocity.z = msg.angular_velocity.z
        imu_msg.orientation.x = q[0]
        imu_msg.orientation.y = q[1]
        imu_msg.orientation.z = q[2]
        imu_msg.orientation.w = q[3]

        self.imu_publisher.publish(imu_msg)
        self.get_logger().debug('Published IMU Data: {}'.format(imu_msg))

        # update the last orientation
        self.last_orientation = q

def main(args=None):
    rclpy.init(args=args)
    
    imu_est = IMU_estimator()

    try:
        rclpy.spin(imu_est)
    except KeyboardInterrupt:
        pass
    finally:
        imu_est.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
