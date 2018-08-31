#include "state_machine.h"

// Constructor.
StateMachine::StateMachine():
	ac("move_base", true)
{

}

// Destructor
StateMachine::~StateMachine()
{

}

void StateMachine::SetActuator(double position) 
{
	ROS_INFO("Moving Actuator!");

	ros::Duration(1).sleep();

	actuator_msg.data = position;

	actuator_pub.publish(actuator_msg);
	ros::spinOnce();
}

void StateMachine::Initialize() 
{
	actuator_pub = nh.advertise<std_msgs::Float64>("eugene/joint1_position_controller/command", 1);
}

void StateMachine::SendGoal(double x, double y, double yaw)
{
	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();

	goal.target_pose.pose.position.x = x;
	goal.target_pose.pose.position.y = y;
	goal.target_pose.pose.orientation = tf::createQuaternionMsgFromRollPitchYaw(0, 0, yaw);

	while(!ac.waitForServer(ros::Duration(5.0))) 
		ROS_INFO("Waiting for the move_base action server to initiate");

	ROS_INFO("Sending goal");
	ac.sendGoal(goal);

	ac.waitForResult();

	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
		ROS_INFO("Found goal!");
	else
		ROS_INFO("Missed goal!");

	ros::spinOnce();
	ros::Duration(1).sleep();
}

// Run the entire state machine sequentially.
void StateMachine::Run() 
{
	SetActuator(-0.1);

	SendGoal(2.5, 0, 0);

	SendGoal(4.5, 0.5, 0);

	SendGoal(1.0, 0, 0);
}
