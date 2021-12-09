#pragma once
#ifndef SumNaturalNumbersRecurs_H
#define SumNaturalNumbersRecurs_H

#include "Task.h"

class SumNaturalNumbersRecurs : public Task
{
private:
	void Process() override;
	int CalculateSum(int lastNumber);
public:
	SumNaturalNumbersRecurs(std::string introductionText);
};

#endif // !SumNaturalNumbersRecurs_H