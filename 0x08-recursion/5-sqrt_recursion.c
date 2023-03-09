#include "main.h"

/**
 * _sqrt_recursion - A function returns the natural square root of a number
 * @n: number
 * @z: number
 * Return: radical n, unless -1
 */

int _sqrt_recursion(int n, int z)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (z * z < n)
		return (_sqrt_recursion(z + 1, n));
	else if (z * z == n)
	{
		return (z);
	}
	return (-1);
}

