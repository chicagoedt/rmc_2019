# rmc_2019

To make this workspace compatible for your Ubuntu 16.04 user, run the following commands (bash script).

chmod +x ws_setup.bash

./ws_setup.bash <user_name>

where <user_name> is your linux user name.
After this step, you will have to install any missing ROS packages or gazebo plugins. 
These should be apparent through error messages during catkin_make.

To run the simulation enter the commands:

source devel/setup.bsah
roslaunch new_robot eugene_robot.launch

To control the robot run:

rosrun teleop_twist_keyboard teleop_twist_keyboard.py

For autonomous operation run:

roslaunch state_machine state_machine.launch

