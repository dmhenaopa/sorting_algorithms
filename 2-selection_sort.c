#include "sort.h"
/**
 * swap_value - swap the values of the array
 *
 * @x_value: x value of the array
 * @y_value: y value of the array
 */
void swap_value(int *x_value, int *y_value)
{
	int temp;

	temp = *x_value;
	*x_value = *y_value;
	*y_value = temp;
}

/**
 * selection_sort - algorithm that sorts
 * an array of integers in ascending order
 *
 * @array: array to sort
 * @size: size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			swap_value(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
