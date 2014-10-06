/*
 * Search_Insert_Position.cpp
 *
 *  Created on: 2014��10��4��
 *      Author: Yanren
 */

//Given a sorted array and a target value, return
//the index if the target is found. If not, return
//the index where it would be if it were inserted in order.
//
//You may assume no duplicates in the array.
//
//Here are few examples.
//[1,3,5,6], 5 �� 2
//[1,3,5,6], 2 �� 1
//[1,3,5,6], 7 �� 4
//[1,3,5,6], 0 �� 0

class Solution {
public:
    int searchInsert(int A[], int n, int target) {

        if(A == 0 || n <= 0)
        return n;

        int i = 0;

        while (i < n)
        {
            if (A[i] >= target)
            return i;

            else
            i++;
        }

        return i;

    }
};
