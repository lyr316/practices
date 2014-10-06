/*
 * Binary_Search_Recursive.cpp
 *
 *  Created on: 2014Äê10ÔÂ5ÈÕ
 *      Author: Yanren
 */

int binarySearchRecursive(int A[], int start, int end, int target)
{
	if (start == end && A[start] != target)
		return -1;

	int mid = start + (end - start)/2;

	if (A[mid] < target)
		return binarySearchRecursive(A, mid + 1, end, target);

	else if (A[mid] > target)
		return binarySearchRecursive(A, start, mid - 1, target);

	else
		return mid;
}
