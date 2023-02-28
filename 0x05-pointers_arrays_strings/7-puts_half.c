#include "main.h"
/**
 * puts_half - A function that prints half of a string, followed by a new line
 * @str: string
 * Return: l
 */

void puts_half(char *str)
{
	int l = 0;
	int z;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	for (z = 0; z < l; z++)
		str--;
	z = (l % 2 == 0) ? l / 2 : (l + 1) / 2;
	for (; z < l; z++)
		_putchar(str[z]);
	_putchar('\n');
}
