#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int random;
	char alp;

	for (random = 0; random <= 9; random++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
