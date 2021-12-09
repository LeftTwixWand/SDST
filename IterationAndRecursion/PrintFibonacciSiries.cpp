#include "PrintFibonacciSiries.h"

PrintFibonacciSiries::PrintFibonacciSiries(std::string introductionText) : Task(introductionText)
{
}

void PrintFibonacciSiries::Process()
{
	int number, first = 1, second = 1, temp;
	std::cout << "Input the Fibonacci number: ";
	std::cin >> number;

	for (int i = 0; i < number; i++)
	{
		std::cout << first << "\t";

		temp = first;
		first = second;
		second = temp + first;
	}

	std::cout << std::endl;
}