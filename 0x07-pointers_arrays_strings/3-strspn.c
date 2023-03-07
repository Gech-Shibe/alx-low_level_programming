#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: intial segment
 * @accept: an input
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y, n, result, check;

	result = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[y])
			{
				result++;
				check = 1;
			}
		}
	}
}
