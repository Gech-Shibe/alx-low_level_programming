#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number of sign
 * Return: 1 if the number greater than 0
 * 0 if the number is 0, -1 if the nuber is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
