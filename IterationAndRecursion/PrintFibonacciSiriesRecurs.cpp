#include "PrintFibonacciSiriesRecurs.h"

PrintFibonacciSiriesRecurs::PrintFibonacciSiriesRecurs(std::string introductionText) : Task(introductionText)
{
}

void PrintFibonacciSiriesRecurs::Process()
{
	int number, i = 0;
	std::cout << "Input a number: ";
	std::cin >> number;

	while (number > i)
	{
		std::cout << GetFibonacciSiries(i) << '\t';
		i++;
	}

	std::cout << std::endl;
}

int PrintFibonacciSiriesRecurs::GetFibonacciSiries(int number)
{
	if (number == 0)
		return 1;
	else if (number == 1)
		return 1;
	else return
		GetFibonacciSiries(number - 1) + GetFibonacciSiries(number - 2);
}