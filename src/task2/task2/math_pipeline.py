import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import sys

# --- NODE 1: The Multiplier of 2 ---
class RawPublisher(Node):
    def __init__(self):
        super().__init__('node1_publisher')
        self.pub = self.create_publisher(Int32, 'raw_signal', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.current_val = 2

    def timer_callback(self):
        msg = Int32()
        msg.data = self.current_val
        self.pub.publish(msg)
        self.get_logger().info(f'Node 1 (Raw) Publishing: {msg.data}')
        self.current_val += 2

# --- NODE 2: The Multiplier of 5 ---
class MathProcessor(Node):
    def __init__(self):
        super().__init__('node2_processor')
        self.sub = self.create_subscription(Int32, 'raw_signal', self.callback, 10)
        self.pub = self.create_publisher(Int32, 'processed_signal', 10)

    def callback(self, msg):
        multiplied = msg.data * 5
        out_msg = Int32()
        out_msg.data = multiplied
        self.pub.publish(out_msg)
        self.get_logger().info(f'Node 2 (Processor): Received {msg.data}, sent {multiplied}')

# --- NODE 3: The Adder of 10 ---
class ResultOutput(Node):
    def __init__(self):
        super().__init__('node3_output')
        self.sub = self.create_subscription(Int32, 'processed_signal', self.callback, 10)

    def callback(self, msg):
        final_result = msg.data + 10
        self.get_logger().info(f'Node 3 (Output) FINAL RESULT: {final_result}')

def main():
    rclpy.init()
    if len(sys.argv) < 2:
        print("Usage: ros2 run task2 pipeline [pub | proc | out]")
        return

    mode = sys.argv[1]
    if mode == "pub":
        node = RawPublisher()
    elif mode == "proc":
        node = MathProcessor()
    elif mode == "out":
        node = ResultOutput()
    else:
        print("Invalid mode. Use pub, proc, or out.")
        return

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
