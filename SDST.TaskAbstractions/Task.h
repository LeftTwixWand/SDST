#pragma once
#ifndef Task_H
#define Task_H

#include "pch.h"
#include "framework.h"
#include <iostream>
#include <string>

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

#endif // !Task_H