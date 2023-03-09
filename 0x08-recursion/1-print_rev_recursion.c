#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1)
	}
	_putchar('\n');
}
