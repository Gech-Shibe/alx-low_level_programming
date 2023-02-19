#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - An entry of the program
 * Description: prints the lowercase alphabet in reverse
 * followed by a new line 
 * Return: 0 (success)
 */
int main(void)
{
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}

	putchar('\n');
	return (0);
}
