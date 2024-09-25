import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from flying_robot_interfaces.msg import ServoPWMState

class FlyingAttControlNode:  # 类名需要和调用时保持一致
    def __init__(self):
        # 创建ROS 2节点
        self.node = rclpy.create_node('att_ctrl_node')

        # 初始化存储IMU处理结果的属性
        self.imu_data = None
        
        # 创建订阅者，订阅 'imu/data' 话题
        self.subscription = self.node.create_subscription(Imu, 'imu/data', self.imu_callback, 10)
        self.subscription  # 防止订阅者被垃圾回收

        # 创建发布者，发布 'servo_pwm' 话题
        self.publisher_ = self.node.create_publisher(ServoPWMState, 'servo_pwm', 10)

        # 创建定时器，周期为0.5秒
        self.timer = self.node.create_timer(0.5, self.timer_callback)  # 500ms周期

    def imu_callback(self, msg):
        # 当收到IMU消息时，处理IMU数据
        # 示例：假设简单地使用IMU的角速度值来进行控制
        angular_velocity = msg.angular_velocity
        # 进行控制算法处理，例如 PI + 前馈控制（这里只是简单示例）
        self.imu_data = {
            'pwm1': 1500 + int(angular_velocity.x * 100),  # 例如基于x轴角速度调整PWM
            'pwm2': 1500 + int(angular_velocity.y * 100),  # 例如基于y轴角速度调整PWM
            'pwm3': 1500 + int(angular_velocity.z * 100)   # 例如基于z轴角速度调整PWM
        }
        print("IMU data processed:", self.imu_data)

    def timer_callback(self):
        # 定时器回调函数，发布舵机的PWM值
        if self.imu_data:
            msg = ServoPWMState()
            # 填充舵机的ID和对应的PWM值
            msg.id = [1, 2, 3]
            msg.pwm = [
                self.imu_data['pwm1'],
                self.imu_data['pwm2'],
                self.imu_data['pwm3']
            ]
            # 发布消息
            self.publisher_.publish(msg)
            print("Published PWM:", msg)
        else:
            print("No IMU data available yet.")

def main(args=None):
    rclpy.init(args=args)
    node = FlyingAttControlNode()  # 类名需与定义一致

    try:
        rclpy.spin(node.node)
    except KeyboardInterrupt:
        pass

    node.node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
