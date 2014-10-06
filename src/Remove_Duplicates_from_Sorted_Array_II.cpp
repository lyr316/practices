/*
 * Remove_Duplicates_from_Sorted_Array_II.cpp
 *
 *  Created on: 2014Äê10ÔÂ4ÈÕ
 *      Author: Yanren
 */

//Follow up for "Remove Duplicates":
//What if duplicates are allowed at most twice?
//
//For example,
//Given sorted array A = [1,1,1,2,2,3],
//
//Your function should return length = 5, and A is now [1,1,2,2,3].

class Solution {
public:
    int removeDuplicates(int A[], int n) {

        if (n <= 0)
            return n;
        int indexFront = 1;
        int indexBack = 0;
        int counter = 0;

        for(; indexFront < n; indexFront++)
        {
            if (A[indexFront] == A[indexBack])
            {
                counter++;
                if (counter <= 1)
                {
                    A[++indexBack] = A[indexFront];
                }
            }

            else
                {
                    counter = 0;
                    A[++indexBack] = A[indexFront];
                }
        }

        return indexBack + 1;
    }
};
