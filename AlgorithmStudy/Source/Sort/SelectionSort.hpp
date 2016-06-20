#pragma once
#include <type_traits>
#include <array>

/*
* Name					: SelectionSort
* Time Complexity		: O(N^2)
* Reference				: http://ehclub.co.kr/1489
*/
template <typename _Ty, int N>
void SelectionSort(std::array<_Ty, N>& Target, bool IsAscendingOrder = true)
{
	_Ty Temp;
	for (int Y = N; Y > 1; --Y)
	{
		int ValueIndex = 0;
		for (int X = 1; X < Y; ++X)
		{
			switch (IsAscendingOrder)
			{
			case true:
				if (Target[ValueIndex] < Target[X])
				{
					ValueIndex = X;
				}
				break;

			case false:
				if (Target[ValueIndex] > Target[X])
				{
					ValueIndex = X;
				}
				break;
			}
		}

		Temp				= Target[Y - 1];
		Target[Y - 1]		= Target[ValueIndex];
		Target[ValueIndex]	= Temp;
	}
}