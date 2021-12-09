#pragma once
#ifndef PrintFibonacciSiries_H
#define PrintFibonacciSiries_H

#include "Task.h"

class PrintFibonacciSiries : public Task
{
private:
	void Process() override;
public:
	PrintFibonacciSiries(std::string introductionText);
};

#endif // !PrintFibonacciSiries_H