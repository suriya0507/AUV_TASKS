import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from submarine_interfaces.msg import SubmarineState # Uses your verified interface

class SubmarineNavigator(Node):
    def __init__(self):
        super().__init__('navigator')
        self.subscription = self.create_subscription(String, 'submarine_commands', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(SubmarineState, 'bot_pos', 10)
        
        # Initial State
        self.x = 0.0
        self.y = 0.0
        self.direction = "North"

    def listener_callback(self, msg):
        command = msg.data
        if command == 'forward': self.y += 1.0
        elif command == 'backward': self.y -= 1.0
        elif command == 'left': self.x -= 1.0
        elif command == 'right': self.x += 1.0
        
        self.direction = command.capitalize()
        self.publish_status()

    def publish_status(self):
        status = SubmarineState()
        status.x = self.x
        status.y = self.y
        status.facing_direction = self.direction
        self.publisher_.publish(status)
        self.get_logger().info(f'Submarine at ({status.x}, {status.y}) facing {status.facing_direction}')

def main(args=None):
    rclpy.init(args=args)
    node = SubmarineNavigator()
    rclpy.spin(node)
    rclpy.shutdown()
