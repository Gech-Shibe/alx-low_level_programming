#include "main.h"
#include <stdio.h>
/**
 * _atoi - A function that convert a string to an integer
 * @s: string
 * Return: number, otherwise 0
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int digit = 0;

	while (s[d] != '\0')
		d++;
	while (a < d && e == 0)
	{
		if (s[a] == '_')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			c = c * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '0')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}
