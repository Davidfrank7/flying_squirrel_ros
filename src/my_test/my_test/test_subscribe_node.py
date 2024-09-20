#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu

class IMUSubscriber(Node):
    def __init__(self):
        super().__init__('imu_subscriber')
        
        # 创建订阅者，订阅 'imu_raw' 话题
        self.subscription = self.create_subscription(
            Imu,
            'imu/data', 
            self.imu_callback,
            10)
        
        self.subscription  # 防止订阅者被垃圾回收

    def imu_callback(self, msg):
        # 当收到IMU消息时回调此函数
        self.get_logger().info('Received IMU Data:')
        self.get_logger().info(f'Orientation: x={msg.orientation.x}, y={msg.orientation.y}, z={msg.orientation.z}, w={msg.orientation.w}')
        self.get_logger().info(f'Angular velocity: x={msg.angular_velocity.x}, y={msg.angular_velocity.y}, z={msg.angular_velocity.z}')
        self.get_logger().info(f'Linear acceleration: x={msg.linear_acceleration.x}, y={msg.linear_acceleration.y}, z={msg.linear_acceleration.z}')

def main(args=None):
    rclpy.init(args=args)
    
    imu_subscriber = IMUSubscriber()

    try:
        rclpy.spin(imu_subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        imu_subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
