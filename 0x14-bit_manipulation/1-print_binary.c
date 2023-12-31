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
	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
