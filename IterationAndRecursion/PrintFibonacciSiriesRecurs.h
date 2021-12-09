#pragma once
#ifndef PrintFibonacciSiriesRecurs_H
#define PrintFibonacciSiriesRecurs_H

#include "Task.h"

class PrintFibonacciSiriesRecurs : public Task
{
private:
	int GetFibonacciSiries(int number);
	void Process() override;
public:
	PrintFibonacciSiriesRecurs(std::string introductionText);
};

#endif // !PrintFibonacciSiriesRecurs_H