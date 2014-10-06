/*
 * Merge_Sorted_Array.cpp
 *
 *  Created on: 2014Äê10ÔÂ4ÈÕ
 *      Author: Yanren
 */

//Given two sorted integer arrays A and B, merge B into A as one sorted array.
//
//Note:
//You may assume that A has enough space (size that is greater or equal to m + n)
//to hold additional elements from B. The number of elements initialized in A and B
//are m and n respectively.

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {

        if (m < 0 || n < 0)
            return;

        int indexA = m - 1;
        int indexB = n - 1;
        int indexSorted = m + n - 1;

        while(indexA >= 0 && indexB >= 0)
        {
            if (A[indexA] > B[indexB])
            {
                A[indexSorted] = A[indexA];
                indexA--;
                indexSorted--;
            }

            else
            {
                A[indexSorted] = B[indexB];
                indexB--;
                indexSorted--;
            }
        }

        while (indexB >= 0)
        {
            A[indexSorted] = B[indexB];
            indexB--;
            indexSorted--;
        }

    }
};
