#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @y: char input
 * Return: y
 */

char *leet(char *y)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; y[i] = '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (y[i] == s1[j])
			{
				y[i] = s2[j];
			}
		}
	}
	return (n)
}
