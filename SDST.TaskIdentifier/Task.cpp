#include "Task.h"

Task::Task(std::string introductionText)
{
	_introductionText = introductionText;
}

void Task::StartExecution()
{
	std::cout << R"(\\\\\\\\\\\\\\\  )" << _introductionText << "  ///////////////" << std::endl;
	Process();
}

void Task::Process()
{
	throw new std::exception("Process method must to be overrided!");
}