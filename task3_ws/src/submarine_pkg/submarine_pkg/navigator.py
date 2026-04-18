import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from submarine_interfaces.msg import SubmarineState

class SubmarineNavigator(Node):
    def __init__(self):
        super().__init__('navigator')
        self.subscription = self.create_subscription(String, 'submarine_commands', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(SubmarineState, 'bot_pos', 10)
        
        # Internal State
        self.x = 0.0
        self.y = 0.0
        self.compass = ["North", "East", "South", "West"]
        self.heading_index = 0  # 0=North, 1=East, 2=South, 3=West

    def listener_callback(self, msg):
        command = msg.data.lower()
        
        # Rotation Logic
        if command == 'turn right':
            self.heading_index = (self.heading_index + 1) % 4
        elif command == 'turn left':
            self.heading_index = (self.heading_index - 1) % 4
            
        # Movement Logic based on current heading
        elif command == 'forward':
            self.move(1.0)
        elif command == 'backward':
            self.move(-1.0)
        
        self.publish_status()

    def move(self, distance):
        facing = self.compass[self.heading_index]
        if facing == "North": self.y += distance
        elif facing == "South": self.y -= distance
        elif facing == "East": self.x += distance
        elif facing == "West": self.x -= distance

    def publish_status(self):
        status = SubmarineState()
        status.x = self.x
        status.y = self.y
        status.facing_direction = self.compass[self.heading_index]
        self.publisher_.publish(status)
        self.get_logger().info(f'Submarine at ({self.x}, {self.y}) facing {status.facing_direction}')

def main(args=None):
    rclpy.init(args=args)
    node = SubmarineNavigator()
    rclpy.spin(node)
    rclpy.shutdown()
