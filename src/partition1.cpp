/*
 * partition1.cpp
 *
 *  Created on: 2014Äê10ÔÂ5ÈÕ
 *      Author: Yanren
 */

int partition1(int A[], int beginIndex, int endIndex)
{
	int l = beginIndex;
	int r = endIndex;
	int pivot = A[l];

	while (l < r)
	{
		while (A[r] > pivot && l < r)
		{
			r--;
		}

		if (l < r)
		{
			A[l] = A[r];
			l++;
		}

		while (A[l] < pivot && l < r)
		{
			l++;
		}

		if (l < r)
		{
			A[r] = A[l];
			r--;
		}
	}

	A[l] = pivot;
	return l;
}


