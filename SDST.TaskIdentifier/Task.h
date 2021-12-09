#pragma once
#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

class Task
{
public:
	Task(std::string introductionText);
	virtual void Process();
};

#endif // !TASK_H