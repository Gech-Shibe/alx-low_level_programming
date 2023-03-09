#include "main.h"

/**
 * _strlen_recursion - a size
 * @s: string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - is_palindrome
 * @s: string
 * @l: direction
 * Return: boolena
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}


/**
 * is_palindrome - A function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string
 * Return: 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
