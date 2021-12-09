#pragma once
#ifndef BinarySearch_H
#define BinarySearch_H

#include "Task.h"

class BinarySearch : public Task
{
private:
	int GetBinarySearchIndex(int* arr, int high, int searchValue);
	void Process() override;
public:
	BinarySearch(std::string introductionText);
};

#endif // !BinarySearch_H