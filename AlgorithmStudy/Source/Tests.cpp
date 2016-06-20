#include "Sort\SequentialSort.hpp"
#include "Sort\BubbleSort.h"
#include "Helper\Helper.hpp"
using namespace std;

void SequentialSortTest();
void BubbleSortTest();

int main()
{
	SequentialSortTest();
	BubbleSortTest();

	cout << endl << endl;

	getchar();
	return 0;
}

/* SequentialSort Test */
void SequentialSortTest()
{
	cout << " - Sequential Sort - " << endl;

	/* Case 1 */
	{
		cout << "Case 1: Int Sorting" << endl;
		array<int, 4> Arr{ 1,3,2,5 };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Int Ascending Order" << endl;
		SequentialSort(Arr);
		PrintArrayElements(Arr);

		cout << "Int Descending Order" << endl;
		SequentialSort(Arr, false);
		PrintArrayElements(Arr);
	}

	/* Case 2 */
	{
		cout << endl;
		cout << "Case 2: Double Sorting" << endl;
		array<double, 10> Arr{ 1.1, 2.3, 0.3, -1.052, 5.13, 4.32, 2.4, 9.01, 10.2, 0.01 };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Double Ascending Order" << endl;
		SequentialSort(Arr);
		PrintArrayElements(Arr);

		cout << "Double Descending Order" << endl;
		SequentialSort(Arr, false);
		PrintArrayElements(Arr);
	}
}

/* BubbleSort Test */
void BubbleSortTest()
{
	cout << endl << " - Bubble Sort - ";
	/* Case 1 */
	{
		cout << endl;
		cout << "Case 1: Int Sorting" << endl;
		array<int, 5> Arr{ 5,4,2,1,3 };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Int Ascending Order" << endl;
		BubbleSort(Arr);
		PrintArrayElements(Arr);

		cout << "Int Descending Order" << endl;
		BubbleSort(Arr, false);
		PrintArrayElements(Arr);
	}

	/* Case 2 */
	{
		cout << endl;
		cout << "Case 2: Float Sorting" << endl;
		array<float, 6> Arr{ 0.01f, 0.2f, -1.3f, 4.0f, 2.0f, 6.0f };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Float Ascending Order" << endl;
		BubbleSort(Arr);
		PrintArrayElements(Arr);

		cout << "Float Descending Order" << endl;
		BubbleSort(Arr, false);
		PrintArrayElements(Arr);
	}
}
	