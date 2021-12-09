#pragma once
#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

class Task
{
private:
	std::string _introductionText;
protected:
	virtual void Process();
public:
	Task(std::string introductionText);
	void StartExecution();
};

#endif // !TASK_H