#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard.
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int y;
	int n;

	for (y = 0; y < 8; y++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[y][n]);
		_putchar('\n');
	}
}
