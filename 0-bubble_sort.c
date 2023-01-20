#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to order
 * @size: Size of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	char *symbol = "";

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_2numbers(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
