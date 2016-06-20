#include "Sort\SequentialSort.hpp"
#include "Helper\Helper.hpp"
using namespace std;

void SequentialSortTest();

int main()
{
	SequentialSortTest();

	getchar();
	return 0;
}

/* SequentialSort Test */
void SequentialSortTest()
{
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
	