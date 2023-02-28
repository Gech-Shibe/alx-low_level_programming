#include "main.h"
/**
 * char *_strcpy - A  function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: a function running
 * @dest: a function running
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int z;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; z < l ; z++)
	{
		dest[z] = src[z];
	}
	dest[l] = '\0';
	return (dest);
}
