#include <iostream>
#include "SumNaturalNumbers.h"

SumNaturalNumbers::SumNaturalNumbers(std::string introductionText) : Task(introductionText)
{
}

void SumNaturalNumbers::Process()
{
	int number, sum = 0;
	std::cout << "Input a number:";
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		sum += i;
	}
	std::cout << "The sum of numbers is: " << sum << std::endl;
}