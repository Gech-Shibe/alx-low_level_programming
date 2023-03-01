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
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		n--;
		b = z[a];
		z[a] = z[n];
		z[n] = b;
	}
	return (0);
}
