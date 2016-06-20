#include "Sort\SequentialSort.hpp"
#include "Sort\BubbleSort.hpp"
#include "Sort\SelectionSort.hpp"
#include "Sort\InsertionSort.hpp"
#include "Sort\ShellSort.hpp"
#include "Helper\Helper.hpp"
using namespace std;

void SequentialSortTest();
void BubbleSortTest();
void SelectionSortTest();
void InsertionSortTest();
void ShellSortTest();

int main()
{
	SequentialSortTest();
	BubbleSortTest();
	SelectionSortTest();
	InsertionSortTest();
	ShellSortTest();

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

/* SelectionSort Test */
void SelectionSortTest()
{
	cout << endl << " - Selection Sort - ";
	/* Case 1 */
	{
		cout << endl;
		cout << "Case 1: Int Sorting" << endl;
		array<int, 7> Arr{ 5,4,2,1,3,7,6 };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Int Ascending Order" << endl;
		SelectionSort(Arr);
		PrintArrayElements(Arr);

		cout << "Int Descending Order" << endl;
		BubbleSort(Arr, false);
		SelectionSort(Arr);
	}

	/* Case 2 */
	{
		cout << endl;
		cout << "Case 2: Float Sorting" << endl;
		array<float, 4> Arr{ 0.01f, 4.0f, 2.0f, 6.0f };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Float Ascending Order" << endl;
		SelectionSort(Arr);
		PrintArrayElements(Arr);

		cout << "Float Descending Order" << endl;
		SelectionSort(Arr, false);
		PrintArrayElements(Arr);
	}
}

/* InsertionSort Test */
void InsertionSortTest()
{
	cout << endl << " - Insertion Sort - ";
	/* Case 1 */
	{
		cout << endl;
		cout << "Case 1: Int Sorting" << endl;
		array<int, 7> Arr{ 5,4,2,1,3,7,6 };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Int Ascending Order" << endl;
		InsertionSort(Arr);
		PrintArrayElements(Arr);

		cout << "Int Descending Order" << endl;
		InsertionSort(Arr, 0, Arr.size() - 1 , 1, false);
		PrintArrayElements(Arr);
	}

	/* Case 2 */
	{
		cout << endl;
		cout << "Case 2: Float Sorting" << endl;
		array<float, 4> Arr{ 0.01f, 4.0f, 2.0f, 6.0f };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Float Ascending Order" << endl;
		InsertionSort(Arr);
		PrintArrayElements(Arr);

		cout << "Float Descending Order" << endl;
		InsertionSort(Arr, false);
		PrintArrayElements(Arr);
	}
}

void ShellSortTest()
{
	cout << endl << " - Shell Sort - ";
	/* Case 1 */
	{
		cout << endl;
		cout << "Case 1: Int Sorting" << endl;
		array<int, 7> Arr{ 5,4,2,1,3,7,6 };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Int Ascending Order" << endl;
		ShellSort(Arr);
		PrintArrayElements(Arr);

		cout << "Int Descending Order" << endl;
		ShellSort(Arr, false);
		PrintArrayElements(Arr);
	}

	/* Case 2 */
	{
		cout << endl;
		cout << "Case 2: Float Sorting" << endl;
		array<float, 4> Arr{ 0.01f, 4.0f, 2.0f, 6.0f };

		cout << "Original Array: " << endl;
		PrintArrayElements(Arr);

		cout << "Float Ascending Order" << endl;
		ShellSort(Arr);
		PrintArrayElements(Arr);

		cout << "Float Descending Order" << endl;
		ShellSort(Arr, false);
		PrintArrayElements(Arr);
	}
}