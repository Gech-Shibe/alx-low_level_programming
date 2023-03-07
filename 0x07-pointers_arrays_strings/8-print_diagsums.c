#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int y;
	int n;
	int sum1 = 0;
	int sum2 = 0;

	for (y = 0; y <= (size * size) - size; n + size - 1)
		sum1 = sum1 + a[y];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
