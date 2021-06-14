#include "sort.h"

/**
* bubble_sort - C - Sorting algorithms & Big O
* @array: list of elements to sort
* @size: length of list
*
* Description: A function that sorts an array of
* integers in ascending order using bubble sort
* algorithm
*/
void bubble_sort(int *array, size_t size)
{
	int flag, temp_actual = 0;
	size_t i;

	flag = 1;
	for (i = 0; flag == 1; i++)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp_actual = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp_actual;
				flag = 1;
				print_array(array, size);
			}
		}

		if (flag == 0)
			break;
	}
}
