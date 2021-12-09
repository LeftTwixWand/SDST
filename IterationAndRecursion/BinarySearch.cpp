#include "BinarySearch.h"

BinarySearch::BinarySearch(std::string introductionText) : Task(introductionText)
{
}

void BinarySearch::Process()
{
	int count, searchedNumber;
	std::cout << "Input count of number in the array: ";
	std::cin >> count;

	int* array = new int[count];

	for (int i = 0; i < count; i++) 
	{
		std::cout << "Input value for index " << i << ": ";
		std::cin >> array[i];
	}


	std::cout << "Input the searched number: ";
	std::cin >> searchedNumber;

	std::cout << "The index of searched number is: " << GetBinarySearchIndex(array, count, searchedNumber) << std::endl;

	delete[] array;
}

int BinarySearch::GetBinarySearchIndex(int* array, int high, int searchValue)
{
	int low = 0, middle;

	while (low <= high)
	{
		middle = low + (high - low) / 2;

		if (array[middle] == searchValue)
		{
			return middle;
		}

		if (array[middle] < searchValue)
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}

	return -1;
}