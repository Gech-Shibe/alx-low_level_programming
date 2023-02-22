#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @a: is a number
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int y = a % 10;

	if (y < 0)
		y *= -1;

	_putchar(y + '0');
	return (y);
}
