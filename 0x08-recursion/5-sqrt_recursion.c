#include "main.h"

/**
 * _sqrt_recursion - A function returns the natural square root of a number
 * @n: number
 * Return: radical n, unless -1
 */

int _sqrt_recursion(int n)
{
	int z = 0;

	if (z < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(z, n));
	}
}
