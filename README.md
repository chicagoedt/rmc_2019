# rmc_2019

To make this workspace compatible for your Ubuntu 16.04 user, run the following commands (bash script).

chmod +x ws_setup.bash

./ws_setup.bash <user_name>

where <user_name> is your linux user name.
After this step, you will have to install any missing ROS packages or gazebo plugins. 
These should be apparent through error messages during catkin_make. After everything needed is installed, catkin_make may need to be ran several times (~2-3) before the workspace is ready.

To run the simulation enter the commands:

source devel/setup.bash

roslaunch new_robot eugene_robot.launch

To control the robot run:

rosrun teleop_twist_keyboard teleop_twist_keyboard.py

For autonomous operation run:

roslaunch state_machine state_machine.launch

