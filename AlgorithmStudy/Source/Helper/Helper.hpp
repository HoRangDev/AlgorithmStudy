#pragma once
#include <iostream>

template <typename _Ty, int N>
void PrintArrayElements(const std::array<_Ty, N>& Target, bool IsOrder = true) 
{
	using namespace std;
	if (IsOrder)
	{
		for (int Index = 0; Index < N; ++Index)
		{
			cout << Target[Index] << '\t';
		}
	}
	else
	{
		for (int Index = (N - 1); Index; --Index)
		{
			cout << Target[Index] << '\t';
		}
	}

	cout << endl;
}
