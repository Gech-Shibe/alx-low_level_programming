#include "main.h"

/**
 * num - for finding natural square root of a number
 * @n: number
 * @sq: square root
 * Return: sq
 */

int num(int n, int sq)
{
	if (n * n == sq)
		return (n);
	if (n == sq)
		return (-1);
	return (1 * num(n + 1, sq));
}

/**
 * _sqrt_recursion - A function returns the natural square root of a number
 * @n: number
 * Return: radical n, unless -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (num(1, n));
}
