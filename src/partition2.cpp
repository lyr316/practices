/*
 * partition2.cpp
 *
 *  Created on: 2014��10��5��
 *      Author: Yanren
 */

int partition2(int A[], int start, int end, int pivotIndex)
{
	std::swap(A[pivotIndex], A[end]);

	int newPivotIndex = start;

	for (int i = start; i < end; i++)
	{
		if (A[i] < A[end])
		{
			std::swap(A[newPivotIndex], A[i]);
			newPivotIndex++;
		}
	}

	std::swap(A[end], A[newPivotIndex]);

	return newPivotIndex;
}
