/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <cstdlib>
#include <cstdbool>
#include <time.h>
#include "general.h"

void init_random(int array[], unsigned long length)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}

void bubble_sort(int array[], unsigned long size)
{
	bool swap = false;
	do
	{
		for (unsigned long i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i+1])
			{
				int tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
				swap = true;
			}
		}
	} while(swap);
}

void insertion_sort(int array[], unsigned long size)
{
	int y;

	for (int i = 1; i < size; i++)
	{
		y = 1;
		while (y > 0 && array[y - 1] > array[y])
		{
			int tmp = array[i];
			array[i] = array[i - 1];
			array[i + 1] = tmp;
			y--;
		}
	}
}
