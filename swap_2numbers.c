#include "sort.h"

/**
 * swap_2numbers - Function that swap two numbers in an array
 * @array: Array of integer
 * @index1: index of the first number to swap in the array
 * @index2: index of the second number to swap in the array
 *
 * Return: Nothing
 */

void swap_2numbers(int *array, unsigned int index1, unsigned int index2)
{
	int a;

	a = array[index1];
	array[index1] = array[index2];
	array[index2] = a;
}
