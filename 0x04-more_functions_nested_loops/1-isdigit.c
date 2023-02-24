#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: is a number to be check
 * Return: 1 if it is a digit, otherwise 0
 */

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
