#pragma once
#include <array>

/*
* Name					: Insert Sort
* Time Complexity		: O(N^2)
* Reference				: http://ehclub.co.kr/1492
*/
template <typename _Ty, int N>
void InsertSort(std::array<_Ty, N>& Target, bool IsAscendingOrder = true)
{
	_Ty Temp;
	for (int Y = 0; Y < N; ++Y)
	{
		for (int X = Y; X > 0; --X)
		{
			switch (IsAscendingOrder)
			{
			case true:
				if (Target[X - 1] > Target[X])
				{
					Temp			= Target[X];
					Target[X]		= Target[X - 1];
					Target[X - 1]	= Temp;
				}
				break;

			case false:
				if (Target[X - 1] < Target[X])
				{
					Temp			= Target[X - 1];
					Target[X - 1]	= Target[X];
					Target[X]		= Temp;
				}
				break;
			}
		}
	}
}