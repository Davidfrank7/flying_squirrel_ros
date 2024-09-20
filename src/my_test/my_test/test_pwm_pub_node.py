import rclpy
from rclpy.node import Node
from flying_robot_interfaces.msg import ServoPWMState  # 使用新的消息类型

class ServoPWMNode(Node):
    def __init__(self):
        super().__init__('servo_pwm_publisher')
        self.publisher_ = self.create_publisher(ServoPWMState, 'servo_pwm', 10)
        self.timer = self.create_timer(0.5, self.timer_callback)  # 500ms周期
        self.servo_ids = [1, 2, 3]  # 舵机ID列表
        self.pwm_center = 1500  # 中点PWM值
        self.pwm_range = 500  # PWM摆动范围
        self.current_pwm = {servo_id: self.pwm_center for servo_id in self.servo_ids}
        self.state = {servo_id: True for servo_id in self.servo_ids}  # True: 往2000跳, False: 往1000跳

    def timer_callback(self):
        msg = ServoPWMState()

        # 填充舵机的ID和对应的PWM值
        msg.id = []
        msg.pwm = []

        for servo_id in self.servo_ids:
            msg.id.append(servo_id)
            
            # 根据状态确定PWM值
            if self.state[servo_id]:
                pwm_value = self.pwm_center + self.pwm_range  # 跳到2000
            else:
                pwm_value = self.pwm_center - self.pwm_range  # 跳到1000
            
            msg.pwm.append(pwm_value)
            
            # 打印信息
            #self.get_logger().info(f'Publishing: Servo ID={servo_id}, PWM={pwm_value}')
            
            # 切换状态
            self.state[servo_id] = not self.state[servo_id]

        # 发布消息
        self.publisher_.publish(msg)
        print(msg)

def main(args=None):
    rclpy.init(args=args)
    node = ServoPWMNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
