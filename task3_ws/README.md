Task 3: Custom submarine state interfaces and navigation logic.
For task 3 I created a new workspace called task3_ws in which I created a source folder src.
This source folder contains 2 folder - submarine_interfaces and submarine_pkg.
submarine_interface has a folder called msg which contains SubmarineState.msg which has the information on how to show user co-ordinates and direction.
It also contains CMakeLists.txt and package.xml
submarine_pkg is the main folder which contains all the main things and codes.
It has another folder submarine_pkg which contains code of commander and navigator and empty file __init__.py.


As for the problems faced, When I tried to execute, it was showing no executable found.
Then instead of directions as north,south,east, west, it was showing forward,backward, right, left.
I was also unable to built the package as it was showing 0 packages finished.

how to build workspace and run the node:

Build: cd task3_ws colcon build --symlink-install 

Terminal 1: cd task3_ws source install/setup.bash ros2 run submarine_pkg commander

Terminal 2: cd task3_ws source install/setup.bash ros2 run submarine_pkg navigator

Terminal 3: cd task3_ws source install/setup.bash ros2 topic echo /bot_pos
