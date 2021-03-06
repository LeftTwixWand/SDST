#include "pch.h"
#include "CppUnitTest.h"
#include <BinarySearch.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace IterationAndRecursionTest
{
	TEST_CLASS(IterationAndRecursionTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BinarySearch* binarySearchTask = new BinarySearch("");
			int* array = new int[5]{ 1, 2, 3, 4, 5 };

			int searchedIndex = binarySearchTask->GetBinarySearchIndex(array, 5, 3);
			Assert::AreEqual(2, searchedIndex);
		}
	};
}