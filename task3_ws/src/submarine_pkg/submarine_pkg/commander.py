import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class SubmarineCommander(Node):
    def __init__(self):
        super().__init__('commander')
        self.publisher_ = self.create_publisher(String, 'submarine_commands', 10)
        self.get_logger().info('Submarine Commander is active.')
        self.run_loop()

    def run_loop(self):
        while rclpy.ok():
            cmd = input("Enter command (forward, backward, left, right): ").strip().lower()
            if cmd in ['forward', 'backward', 'left', 'right']:
                msg = String()
                msg.data = cmd
                self.publisher_.publish(msg)
            else:
                print("Invalid command!")

def main(args=None):
    rclpy.init(args=args)
    node = SubmarineCommander()
    rclpy.shutdown()
