#include "SumNaturalNumbersRecurs.h"

SumNaturalNumbersRecurs::SumNaturalNumbersRecurs(std::string introductionText) : Task(introductionText)
{
}

void SumNaturalNumbersRecurs::Process()
{
	int number;
	std::cout << "Input a number: ";
	std::cin >> number;
	std::cout << "Calculated sum: " << CalculateSum(number) << std::endl;
}

int SumNaturalNumbersRecurs::CalculateSum(int lastNumber)
{
	int sum = 0;
	if (lastNumber == 1)
	{
		return sum += 1;
	}
	else
	{
		return sum += lastNumber + CalculateSum(lastNumber - 1);
	}
}