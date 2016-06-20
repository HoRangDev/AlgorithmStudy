#pragma once
#include <array>

/*
* Name				 : Squential Sort
* Time Complexity	 : O(N^2)
* Reference			 : http://ehclub.co.kr/1484
*/
template <typename _Ty, int N>
void SequentialSort(std::array<_Ty, N>& Target, bool IsAscendingOrder = true)
{
	_Ty Temp;
	for (int Y = 0; Y < N; ++Y)
	{
		for (int X = Y + 1; X < N; ++X)
		{
			switch (IsAscendingOrder)
			{
			case true:
				if (Target[Y] > Target[X])
				{
					Temp		 = Target[Y];
					Target[Y]	 = Target[X];
					Target[X]	 = Temp;
				}

				break;

			case false:
				if (Target[Y] < Target[X])
				{
					Temp		= Target[Y];
					Target[Y]	= Target[X];
					Target[X]	= Temp;
				}

				break;
			}
		}
	}
}