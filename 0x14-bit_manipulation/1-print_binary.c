#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a decimal number
 * @n: number to print in binary
 *
 * Return: in base 2
 */

void print_binary(unsigned long int n)
{
	int a, value = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
