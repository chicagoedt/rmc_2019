#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/chel/rmc_2019/rmc_2019_ws/src/common_msgs/sensor_msgs"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/chel/rmc_2019/rmc_2019_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/chel/rmc_2019/rmc_2019_ws/install/lib/python2.7/dist-packages:/home/chel/rmc_2019/rmc_2019_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/chel/rmc_2019/rmc_2019_ws/build" \
    "/usr/bin/python" \
    "/home/chel/rmc_2019/rmc_2019_ws/src/common_msgs/sensor_msgs/setup.py" \
    build --build-base "/home/chel/rmc_2019/rmc_2019_ws/build/common_msgs/sensor_msgs" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/chel/rmc_2019/rmc_2019_ws/install" --install-scripts="/home/chel/rmc_2019/rmc_2019_ws/install/bin"
