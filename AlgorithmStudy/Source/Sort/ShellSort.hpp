#pragma once
#include "InsertionSort.hpp"

/*
* Name						: Shell Sort
* Average Time Complexity	: O(N^(3/2))
* Worst   Time Complexity	: O(N^2)
* Reference					: http://blog.naver.com/madplay/220229298991
*/
template <typename _Ty, int N>
void ShellSort(std::array<_Ty, N>& Target, bool IsAscendingOrder = true)
{
	for (int Gap = N / 2; Gap > 0; Gap /= 2)
	{
		if ((Gap % 2) == 0)
		{
			++Gap;
		}

		for (int Index = 0; Index < Gap; ++Index)
		{
			InsertionSort<_Ty, N>(Target, Index, N - 1, Gap, IsAscendingOrder);
		}
	}
}