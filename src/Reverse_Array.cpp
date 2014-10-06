/*
 * Reverse_Array.cpp
 *
 *  Created on: 2014Äê10ÔÂ4ÈÕ
 *      Author: Yanren
 */

//Write a program to reverse the integers in an given array A[]

void reverseArray(int* array, int size)
{
	if (size < 2)
		return;

	for(int i = 0; i < (size/2); i++)
	{
		std::swap(array[i], array[size - 1 - i]);
	}

}
