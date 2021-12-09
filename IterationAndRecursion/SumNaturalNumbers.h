#pragma once
#ifndef SumNaturalNumbers_H
#define SumNaturalNumbers_H

#include "Task.h"

class SumNaturalNumbers : public Task
{
private:
	void Process() override;
public:
	SumNaturalNumbers(std::string introductionText);
};

#endif // !SumNaturalNumbers_H