#include "main.h"

/**
 * print_line - a function that print line
 * @n: the parameter to be checked
 *
 * Return: 0 success
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
