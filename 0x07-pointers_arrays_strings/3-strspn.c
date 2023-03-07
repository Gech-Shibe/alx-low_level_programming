#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: intial segment
 * @accept: an input
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (*s);
		}
		s++;
	}
	return ('\0');
}
