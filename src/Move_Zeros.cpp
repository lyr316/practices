/*
 * Move_Zeros.cpp
 *
 *  Created on: 2014��10��4��
 *      Author: Yanren
 */

//Write a program to put all the 0 in an array
//at the front of it, and others keeps their
//original order . For example,
//A[0,1,3,0,0,0,5,0] -> A[0,0,0,0,0,1,3,5]

#include <algorithm>

void moveZeros(int* a, int size)
{
   if (size <= 0 )
      return;
   int lastZero = a[size - 1];

   for (int i = size - 1; i >= 0 ; i--)
      {
         if (a[i] != 0)
          {
             std::swap(a[i], a[lastZero]);
             lastZero--;
          }
      }
   }
