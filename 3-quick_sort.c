#include "sort.h"

/**
* lomuto_partition - C - Sorting algorithms & Big O
* @array: Array to be sorted
* @low: the lowest index of partition-array
* @high: the largest index of partition-array
* @size: total size of array
*
* Description: Implementation of Lomuto partition scheme.
* Return: index where the pivot is ubicated.
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = 0, i = 0, j = 0, temporal = 0;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (array[i] > pivot)
			{
				temporal = array[i];
				array[i] = array[j];
				array[j] = temporal;
				print_array(array, size);
			}
		}
	}

	temporal = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temporal;
	if (array[j] != pivot)
	{
		print_array(array, size);
	}

	return (i + 1);
}

/**
* sort - C - Sorting algorithms & Big O
* @array: Array to be sorted
* @low: the lowest index of partition-array
* @high: the largest index of partition-array
* @size: total size of array
*
* Description: Function that recursively sort the left of pivot
* and right of pivot partition.
*/
void sort(int *array, int low, int high, size_t size)
{
	int partition = 0;

	if (low < high && size >= 2)
	{
		partition = lomuto_partition(array, low, high, size);
		sort(array, low, partition - 1, size);
		sort(array, partition + 1, high, size);
	}

	else
	{
		return;
	}
}

/**
* quick_sort - C - Sorting algorithms & Big O
* @array: Array to be sorted
* @size: total size of array
*
* Description: Function that sorts an array of integers in ascending
* order using the Quick sort algorithm
*/
void quick_sort(int *array, size_t size)
{
	int low = 0, high = 0;

	if (array == NULL || size < 2)
	{
		return;
	}

	low = 0;
	high = size - 1;
	sort(array, low, high, size);
}
