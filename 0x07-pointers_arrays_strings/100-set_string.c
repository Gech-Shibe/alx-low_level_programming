#include <stdio.h>
#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: input
 * @to: input
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
