#pragma once
#include <array>

/*
* Name					: Bubble Sort
* Time Complexity		: O(N^2)
* Reference				: http://ehclub.co.kr/1486
*/
template <typename _Ty, int N>
void BubbleSort(std::array<_Ty, N>& Target, bool IsAscendingOrder = true)
{
	_Ty Temp;
	for (int Y = (N-1); Y > 0; --Y)
	{
		for (int X = 0; X < Y; ++X)
		{
			switch (IsAscendingOrder)
			{
			case true:
				if (Target[X] > Target[X + 1])
				{
					Temp			= Target[X];
					Target[X]		= Target[X + 1];
					Target[X + 1]	= Temp;
				}

				break;

			case false:
				if (Target[X] < Target[X + 1])
				{
					Temp			= Target[X + 1];
					Target[X + 1]	= Target[X];
					Target[X]		= Temp;
				}

				break;
			}
		}
	}
}
