#include "aruco_localize.h"
#include <rtabmap_ros/ResetPose.h>

void Localizer::localizePoseCallback(const geometry_msgs::PoseStamped &poseMsg) {
	currentPose.x = poseMsg.pose.position.x;
	currentPose.y = poseMsg.pose.position.y;
}

int main(int argc, char **argv) {
	int counter = 0;
	bool success = false;

	ros::init(argc, argv, "aruco_localize");
	ros::NodeHandle nh;

	Localizer localizer;

	ros::Subscriber poseSub = nh.subscribe("/aruco_single/pose", 1, &Localizer::localizePoseCallback, &localizer);

	ros::ServiceClient poseClient = nh.serviceClient<rtabmap_ros::ResetPose>("/rtabmap/reset_odom_to_pose");

	rtabmap_ros::ResetPose setPose;

	ros::Rate rate(2);

	ros::Duration(3).sleep();

	while (counter != 2) {
		ros::spinOnce();

		setPose.request.x = localizer.currentPose.x - 2.0; //-2.0 for simulation.
		setPose.request.y = localizer.currentPose.y - 0.6; //-0.6 for simulation.

		ROS_INFO_STREAM("currentPose.x: " << localizer.currentPose.x);
		ROS_INFO_STREAM("currentPose.y: " << localizer.currentPose.y);

		success = poseClient.call(setPose);

		if (success) 
			ROS_INFO_STREAM("Success!");
		else
			ROS_INFO_STREAM("Failed to set service!");

		rate.sleep();

		++counter;
	}
}
