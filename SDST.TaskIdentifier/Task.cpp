#include "Task.h"

Task::Task(std::string introductionText)
{
	std::cout << introductionText << std::endl;
}

void Task::Process()
{
	throw new std::exception("Process method must to be overrided!");
}