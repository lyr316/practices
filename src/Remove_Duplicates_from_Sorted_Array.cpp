/*
 * Remove_Duplicates_from_Sorted_Array.cpp
 *
 *  Created on: 2014Äê10ÔÂ4ÈÕ
 *      Author: Yanren
 */

//Given a sorted array, remove the duplicates in place such
//that each element appear only once and return the new length.
//
//Do not allocate extra space for another array, you must do this
//in place with constant memory.
//
//For example,
//Given input array A = [1,1,2],
//
//Your function should return length = 2, and A is now [1,2].

class Solution {
public:
    int removeDuplicates(int A[], int n) {

        if (n <= 0)
            return n;

        int p = 0;

        for (int i = 1; i < n; i++)
        {
            if (A[i] != A[p])
            {
            	swap(A[++p], A[i]);
            }
        }

        return p + 1;
    }
};
