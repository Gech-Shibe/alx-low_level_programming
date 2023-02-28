#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords
 * for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int pass[100];
	int z;
	int sum;
	int y;

	sum = 0;
	srand(time(NULL));
	for (z = 0; z < 100; z++)
	{
		pass[z] = rand() % 78;
		sum += (pass[z] + '0');
		putchar(pass[z] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
