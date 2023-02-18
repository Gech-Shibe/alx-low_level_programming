#include <stdio.h>
/**
 * main - A program prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
