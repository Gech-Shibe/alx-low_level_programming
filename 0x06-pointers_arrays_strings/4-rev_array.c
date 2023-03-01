#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers
 * @a: array
 * @n: is the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n; c++)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
