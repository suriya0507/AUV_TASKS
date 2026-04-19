Taks4: Autonomous Vision State Machine
First I created a workspace called task4_ws in which I created work folder src.
I created a folder vision_pkg which consists of setup.py package.xml and vision_pkg
This vision_pkg containsthe main node vision_node.py containing the code.

As for problems, first we tried using webcam but it didn't work.
So I took a video in my phone and sent to my laptop and then saved it in my task4_ws folder with name test.mp4.
Then I had TabError which was because of using tab instead of space in vision_node.py.

How to build and run the code:

Build:
cd task4_ws
colcon build --package-select vision_pkg

Terminal1:
cd task4_ws
source install/setup.bash
ros2 run vision_pkg vision_lock

