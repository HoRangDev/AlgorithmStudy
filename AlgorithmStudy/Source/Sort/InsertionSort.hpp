#pragma once
#include <array>

/*
* Name						: Insertion Sort
* Best  Time Complexity		: O(N)
* Worst Time Complexity		: O(N^2)
* Reference					: http://ehclub.co.kr/1492
*/
template <typename _Ty, int N>
void InsertionSort(std::array<_Ty, N>& Target, int FirstIdx = 0, int LastIdx = (N - 1), int IdxGap = 1, bool IsAscendingOrder = true)
{
	_Ty Temp;
	for (int Y = FirstIdx ; Y <= LastIdx; Y += IdxGap)
	{
		for (int X = Y; X > FirstIdx; X -= IdxGap)
		{
			switch (IsAscendingOrder)
			{
			case true:
				if (Target[X - 1] > Target[X])
				{
					Temp = Target[X];
					Target[X] = Target[X - 1];
					Target[X - 1] = Temp;
				}
				break;

			case false:
				if (Target[X - 1] < Target[X])
				{
					Temp = Target[X - 1];
					Target[X - 1] = Target[X];
					Target[X] = Temp;
				}
				break;
			}
		}
	}
}