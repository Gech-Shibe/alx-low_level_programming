#include "main.h"
/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int l = 0;
	int z;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (z = l; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
