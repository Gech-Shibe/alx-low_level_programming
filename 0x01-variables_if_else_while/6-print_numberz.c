#include <stdio.h>
/**
 * main - A program prints number
 * Description: prints all single digit numbers of base 10
 *  starting from 0, followed by a new line
 *  Return: 0 (success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(48 + b);
		b++;
	}
	putchar('\n');
	return (0);
}
