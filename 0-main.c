#include "sort.h"

/**
 * main - program that swap two numbers in an array
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int i;
	int array[] = {4, 2, 8, 9, 5, 10, 8};

	printf("Array before the swap: [");
	for (i = 0; i < 7; i++)
	{
		printf("%d", array[i]);
	}
	printf("]\n");
	swap_2numbers(array, 1, 3);
	printf("Array After the swap: [");
	for (i = 0; i < 7; i++)
	{
		printf("%d", array[i]);
	}
	printf("]\n");
	return (0);
}
