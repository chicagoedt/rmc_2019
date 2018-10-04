#include "aruco_localize.h"
#include <rtabmap_ros/ResetPose.h>

void Localizer::LocalizePoseCallback(const geometry_msgs::PoseStamped &poseMsg) 
{
	currentPose.x = poseMsg.pose.position.x;
	currentPose.y = poseMsg.pose.position.y;
}

void Docker::DockingCallback(const new_robot::Docking &docking_msg) 
{
	if (docking_msg.beginDocking)  {
		ROS_INFO("Docking!\n");
		startDocking = true;
	}
}

int main(int argc, char **argv) {
	int counter = 0;
	bool success = false;

	ros::init(argc, argv, "aruco_localize");
	ros::NodeHandle nh;

	Localizer localizer;
	Docker docker;

	docker.startDocking = false;

	ros::Subscriber poseSub = nh.subscribe("/aruco_single/pose", 1, &Localizer::LocalizePoseCallback, &localizer);
	ros::Subscriber docking_sub = nh.subscribe("docking_state", 1, &Docker::DockingCallback, &docker);

	ros::Publisher docking_pub = nh.advertise<new_robot::Docking>("docking_state", 1);

	ros::ServiceClient poseClient = nh.serviceClient<rtabmap_ros::ResetPose>("/rtabmap/reset_odom_to_pose");

	rtabmap_ros::ResetPose setPose;

	ros::Rate rate(2);

	ros::Duration(3).sleep();

	while (counter != 2) {
		ros::spinOnce();

		setPose.request.x = localizer.currentPose.x - 2.5; //-2.5 for simulation.
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

	while (1) {
		ros::Duration(1).sleep();
		ros::spinOnce();

		if (docker.startDocking) {

			ROS_INFO_STREAM("currentPose.x: " << localizer.currentPose.x);
			ROS_INFO_STREAM("currentPose.y: " << localizer.currentPose.y);

			docker.docking_msg.beginDocking = true;
			docker.docking_msg.moveToBin = true;
			docker.docking_msg.arucoX = localizer.currentPose.x - 4.4;
			docker.docking_msg.arucoY = localizer.currentPose.y;

			docking_pub.publish(docker.docking_msg);
			ros::spin();
			break;
		}
	}

	return 0;
}
