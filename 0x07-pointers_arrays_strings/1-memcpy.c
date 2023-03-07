#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: copy to
 * @src: copy from
 * @n: bytes
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		dest[y] = src[y];
	return (dest);
}
