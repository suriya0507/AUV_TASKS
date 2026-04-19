import rclpy
from rclpy.node import Node
import cv2
import numpy as np
from cv_bridge import CvBridge

class VisionLockNode(Node):
    def __init__(self):
        super().__init__('vision_lock_node')
        self.bridge = CvBridge()
        self.cap = cv2.VideoCapture('/home/suriya_prakash/task4_ws/test.mp4') 
        self.timer = self.create_timer(0.1, self.process_frame)
        
        # Adjust for your object color (Example: Blue object)
        self.lower_color = np.array([100, 150, 50])
        self.upper_color = np.array([140, 255, 255])

    def process_frame(self):
        ret, frame = self.cap.read()
        if not ret: 
            # If the video ends, reset it back to the first frame
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            return

        width = frame.shape[1]
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, self.lower_color, self.upper_color)
        
        # Calculate Object Center
        moments = cv2.moments(mask)
        object_detected = moments["m00"] > 1000  # Minimum pixel area
        
        state = "SEARCHING"
        output_frame = frame.copy()

        if object_detected:
            cx = int(moments["m10"] / moments["m00"])
            
            # STATE MACHINE LOGIC
            if cx < width // 3:
                state = "ALIGNING LEFT"
                output_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            elif cx > 2 * (width // 3):
                state = "ALIGNING RIGHT"
                output_frame = cv2.Canny(frame, 100, 200)
                output_frame = cv2.cvtColor(output_frame, cv2.COLOR_GRAY2BGR)
            else:
                state = "LOCKED ON"
                # Keep original colors, just draw a tracker
                cv2.circle(output_frame, (cx, frame.shape[0]//2), 30, (0, 255, 0), 2)
        else:
            state = "SEARCHING"
            output_frame = cv2.bitwise_not(frame) # Invert colors

        # Log to terminal and update display
        self.get_logger().info(f"FSM STATE: {state}")
        cv2.putText(output_frame, f"STATUS: {state}", (20, 50), 
                    cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 255), 2)
        cv2.imshow("Task 4: Visual Lock", output_frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = VisionLockNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.cap.release()
    cv2.destroyAllWindows()
    rclpy.shutdown()
