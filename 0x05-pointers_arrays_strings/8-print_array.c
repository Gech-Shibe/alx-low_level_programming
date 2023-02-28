#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers
 * followed by a new line
 * @a: array
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
	{
		printf("%d, ", a[z]);
	}
	if (z == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
