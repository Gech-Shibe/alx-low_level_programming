#include <stdio.h>
#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char * 1 = haystack;
	char * 2 = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*1 == *2 && *2 != '\0')
		{
			1++;
			2++;
		}
		if (*2 == '\0')
			return (haystack);
	}
	return (NULL);
}
