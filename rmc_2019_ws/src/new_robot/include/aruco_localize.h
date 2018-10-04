#ifndef Aruco_Localizer_H
#define Aruco_Localizer_H

#include <ros/ros.h>
#include <aruco_msgs/Marker.h>
#include <aruco_msgs/MarkerArray.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <new_robot/Docking.h>

class Localizer 
{
public:
	void LocalizePoseCallback(const geometry_msgs::PoseStamped &poseMsg);

	typedef struct aruco_pose {
		double x;
		double y;
	} arucoPose;

	arucoPose currentPose;
};

class Docker
{
public:
	void DockingCallback(const new_robot::Docking &docking_msg);

	bool startDocking;

	new_robot::Docking docking_msg;
};

#endif
