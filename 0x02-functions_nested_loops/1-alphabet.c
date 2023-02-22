#include "main.h"
/**
 * man - A function prints letter
 * Description:  function that prints the alphabet, in lowercas
 * followed by a new line
 * Return: 0
 */

void print_alphabet(void);
{ 
	
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}

