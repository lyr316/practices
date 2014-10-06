/*
 * Quick_Sort_and_Quick_Select.cpp
 *
 *  Created on: 2014Äê10ÔÂ5ÈÕ
 *      Author: Yanren
 */

#include <iostream>

int partition(int A[], int start, int end, int pivotIndex)
{
	std::swap(A[pivotIndex], A[end]);

	int newPivotIndex = start;

	for (int i = start; i < end; i++)
	{
		if (A[i] < A[end])
		{
			std::swap(A[i], A[newPivotIndex]);
			newPivotIndex++;
		}
	}

	std::swap(A[end], A[newPivotIndex]);

	return newPivotIndex;
}

void quickSort(int A[], int l, int r)
{
	if (l >= r)
		return;

	int pivotIndex = partition(A, l, r, l);

	quickSort(A, l, pivotIndex - 1);
	quickSort(A, pivotIndex + 1, r);
}

int quickSelect(int A[], int l, int r, int k)
{
	int pivotIndex = partition(A, l, r, l);

	if (pivotIndex <= k - 1)
	{
		return quickSelect(A, pivotIndex + 1, r, k);
	}

	if (pivotIndex >= k + 1)
	{
		return quickSelect(A, l, pivotIndex - 1, l);
	}

	else
		return A[pivotIndex];
}


