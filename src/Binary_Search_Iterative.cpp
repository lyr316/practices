/*
 * Binary_Search_Iterative.cpp
 *
 *  Created on: 2014Äê10ÔÂ5ÈÕ
 *      Author: Yanren
 */

int binarySearchIterative(int A[], int l, int r, int target)
{
	if (l > r)
		return -1;

	int start = l;
	int end = r;

	while(start <= end)
	{
		int mid = start + (end - start)/2;

		if (A[mid] < target)
		{
			start = mid + 1;
		}

		else if (A[mid] > target)
		{
			end = mid - 1;
		}

		else
			return mid;
	}

	return -1;
}
