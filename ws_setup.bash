#!/bin/bash

user=("$@")

cd /home/${user[0]}/rmc_2019/rmc_2019_ws/src

mv -v /home/${user[0]}/rmc_2019/rmc_2019_ws/src/* ~/rmc_2019/rmc_2019_ws/

rm -rf *

cd ..

rm -rf build
rm -rf devel

mv -v /home/${user[0]}/rmc_2019/rmc_2019_ws/* ~/rmc_2019/rmc_2019_ws/src/

catkin_make
catkin_make
catkin_make
