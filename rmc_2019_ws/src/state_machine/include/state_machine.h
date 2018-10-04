#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <tf/transform_datatypes.h>
#include <tf/transform_listener.h>
#include <std_msgs/Float64.h>
#include <new_robot/Docking.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	void Initialize();
	void Run();
	void Dock();

private:
	void SendGoal(double x, double y, double yaw);
	void SetActuator(double position);

	ros::NodeHandle nh;

	MoveBaseClient ac;

	ros::Publisher actuator_pub;
	ros::Publisher docking_pub;

	ros::Subscriber docking_sub;

	std_msgs::Float64 actuator_msg;
	new_robot::Docking docking_msg;

	move_base_msgs::MoveBaseGoal goal;

	double dockPoseX;
	double dockPoseY;

};

class DockMaster 
{
public:
	void DockCoordinatesCallback(const new_robot::Docking &docker_msg);

	new_robot::Docking docker_msg;

	double dockPoseX;
	double dockPoseY;

	bool goToBin;

private:
};

#endif
