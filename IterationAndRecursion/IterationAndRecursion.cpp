#include <iostream>
#include "Task.h"
#include "SumNaturalNumbers.h"
#include "SumNaturalNumbersRecurs.h"
#include "PrintFibonacciSiries.h"
#include "PrintFibonacciSiriesRecurs.h"
#include "BinarySearch.h"

int main()
{
	Task* tasks[] = { 
		new SumNaturalNumbers("Sum of natural numbers"),
		new SumNaturalNumbersRecurs("Sum of natural numbers recursive"),
		new PrintFibonacciSiries("Fibonacci siries"),
		new PrintFibonacciSiriesRecurs("Fibonacci siries recursive"),
		new BinarySearch("Binary search")
	};

	for (Task* task : tasks)
		(*task).StartExecution();
}