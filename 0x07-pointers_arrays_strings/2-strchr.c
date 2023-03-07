#include <stdio.h>
#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: string
 * @c: character c
 * Return: s if the charrcter occurance c, not found NULL
 */

char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (s + y);
	}
	return (NULL);
}
