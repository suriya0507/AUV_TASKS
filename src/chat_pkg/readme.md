TASK1: Basic publisher-subscriber nodes.
First I created a woekspace to do my task called chat_ws. Then I created a source folder src in which I had a package chat_pkg which has another folder chat_pkg containing empty __init__.py file and a file named chat_node.py which contains the main python code which makes the connection between node and subscriber.
The main chat_pkg file also contains other important things like setup.py.

how to build workspace and run the node:

Build:
cd chat_ws
colcon build --packages-select chat_pkg

Terminal 1:
cd chat_ws
source install/setup.bash
ros2 run chat_pkg chat_node Invictus

Terminal 2:
cd chat_ws
source install/setup.bash
ros2 run chat_pkg chat_node Hawcker
