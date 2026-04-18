import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import sys
import threading

class ChatNode(Node):
    def __init__(self, username):
        super().__init__('chat_node_' + username)
        self.username = username
        
        # Publisher to send messages
        self.publisher_ = self.create_publisher(String, 'chat', 10)
        
        # Subscriber to receive messages
        self.subscription = self.create_subscription(
            String,
            'chat',
            self.listener_callback,
            10)
        
        self.get_logger().info(f"Chat node started as [{self.username}]. Type your message and press Enter!")

    def listener_callback(self, msg):
        # We only print the message if it wasn't sent by us
        if not msg.data.startswith(f"[{self.username}]"):
            # Move to a new line to avoid overlapping with user input
            print(f"\n{msg.data}")
            print(f"[{self.username}]: ", end='', flush=True)

    def send_chat(self):
        while rclpy.ok():
            user_input = input(f"[{self.username}]: ")
            if user_input:
                msg = String()
                msg.data = f"[{self.username}]: {user_input}"
                self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    
    # Get username from command line arguments
    if len(sys.argv) < 2:
        print("Usage: ros2 run chat_pkg chat_node <username>")
        return
    
    username = sys.argv[1]
    node = ChatNode(username)

    # We use a thread for user input so it doesn't block the ROS executor
    input_thread = threading.Thread(target=node.send_chat, daemon=True)
    input_thread.start()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
