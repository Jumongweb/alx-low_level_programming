#include "main.h"
/**
 * print_chessboard - a function that print the chessboard
 * @a: parameter arrray
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[i][c]);
		_putchar('\n');
	}
}

