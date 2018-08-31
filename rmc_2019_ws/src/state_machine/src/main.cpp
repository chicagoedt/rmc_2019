#include "state_machine.h"

int main(int argc, char **argv) 
{
	ros::init(argc, argv, "state_machine");
	
	StateMachine stateMachine;

	stateMachine.Initialize();

	stateMachine.Run();

	return 0;
}
