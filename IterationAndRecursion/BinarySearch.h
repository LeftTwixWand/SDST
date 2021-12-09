#pragma once
#ifndef BinarySearch_H
#define BinarySearch_H

#include "Task.h"

class BinarySearch : public Task
{
private:
	void Process() override;
public:
	int GetBinarySearchIndex(int* array, int high, int searchValue);
	BinarySearch(std::string introductionText);
};

#endif // !BinarySearch_H