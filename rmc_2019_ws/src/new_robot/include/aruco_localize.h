#ifndef Aruco_Localizer_H
#define Aruco_Localizer_H

#include <ros/ros.h>
#include <aruco_msgs/Marker.h>
#include <aruco_msgs/MarkerArray.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>

class Localizer 
{
public:
	void localizePoseCallback(const geometry_msgs::PoseStamped &poseMsg);

	typedef struct aruco_pose {
		double x;
		double y;
	} arucoPose;

	arucoPose currentPose;
};

#endif
