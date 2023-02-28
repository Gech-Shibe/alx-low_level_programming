#include "main.h"
/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string
 */

void puts2(char *str)
{
	int l = 0;
	int w = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	w = l - 1;
	for (z = 0; z <= w; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
