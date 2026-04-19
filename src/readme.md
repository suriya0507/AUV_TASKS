Task 2: Mathematical data pipelines.
I used the same workspace chat_ws and same source folder src.
I created a new folder named task2_ws to do all the necessary things for task2.
It contains setup.py and and another folder task2 which contains the main code math_pipeline.py and an empty file __init__.py.

how to build workspace and run the node:

Build:
cd chat_ws
colcon build --packages-select task2

Terminal 1:
cd chat_ws
source install/setup.bash
ros2 run task2 pipeline pub

Terminal 2:
cd chat_ws
source install/setup.bash
ros2 run task2 pipeline proc

Terminal 3:
cd chat_ws
source install/setup.bash
ros2 run task2 pipeline out
