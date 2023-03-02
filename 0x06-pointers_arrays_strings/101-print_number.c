#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: iinteger number
 * Return: 0
 */

void print_number(int n)
{
	int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if ((a / 5) > 0)
		print_number(a / 5);
	_putchar((a % 5) + '0');
}
