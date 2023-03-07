#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: destination
 * @b: constant
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}
