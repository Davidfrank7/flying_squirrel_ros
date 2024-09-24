#!/usr/bin/env python3
# encoding: utf-8

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from std_msgs.msg import Float32MultiArray
import struct
from flying_robot_control.flying_hardware_sdk import Board
from flying_robot_interfaces.msg import ServoPWMState   
import time


class FlyingHardwareNode(Node):
    def __init__(self):
        super().__init__('flying_hardware_node')
        
        # 初始化发布器和接收器
        self.imu_publisher = self.create_publisher(Imu, '/imu/data_raw', 10)
        self.pwm_subscription = self.create_subscription(ServoPWMState, 'servo_pwm', self.pwm_callback, 10)
        
        # 创建Board对象，并启用接收
        self.board = Board(device="/dev/ttyACM0", baudrate=115200)  # 根据实际情况修改串口号和波特率
        self.board.enable_reception()
        print("Collecting IMU data...")

        # 设置定时器，每0.1秒发布一次IMU数据
        self.timer = self.create_timer(0.2, self.publish_imu_data)

    def publish_imu_data(self):
        # [从串口获取IMU数据]
        imu_data = self.board.get_imu()
        # print(imu_data)
        self.get_logger().debug(f'IMU data: {imu_data}')

        if imu_data:
            imu_msg = Imu()

            # 填充IMU消息
            imu_msg.header.stamp = self.get_clock().now().to_msg()
            imu_msg.header.frame_id = 'imu_frame'

            imu_msg.linear_acceleration.x = imu_data[0]
            imu_msg.linear_acceleration.y = imu_data[1]
            imu_msg.linear_acceleration.z = imu_data[2]

            imu_msg.angular_velocity.x = imu_data[3]
            imu_msg.angular_velocity.y = imu_data[4]
            imu_msg.angular_velocity.z = imu_data[5]
 
            # 发布IMU数据
            self.imu_publisher.publish(imu_msg)
    
    def pwm_callback(self, msg):
        # [将PWM消息发送到串口]
        pwm_data = []
        for i in range(len(msg.id)):
            pwm_data.append(msg.id[i])
            pwm_data.append(msg.pwm[i])
        #print([[msg.id[0],msg.pwm[0]], [msg.id[1],msg.pwm[1]], [msg.id[2],msg.pwm[2]]]) 
        self.board.pwm_servo_set_position(0.5,[[msg.id[0],msg.pwm[0]], [msg.id[1],msg.pwm[1]], [msg.id[2],msg.pwm[2]]])
        self.board.pwm_servo_set_offset(msg.id[0], 0) 
        # print(f"Received PWM data: {pwm_data}")
        self.get_logger().info(f"Received PWM data: {pwm_data}")


def main(args=None):
    rclpy.init(args=args)
    node = FlyingHardwareNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
