#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program with base 10
 * Description: prints all single digit numbers of base 10 starting from 0
 * Starting from 0, followed by new line
 * Return: 0 (success)
 */
int main(void)
{
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
