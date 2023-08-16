#include "main.h"

/**
 * print_sign - A function that print sign of number
 * @n: the letter to be checked
 *
 * Return: 0 success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
	return (0);
	}
	else
	{
		_putchar(45);
	return (-1);
	}
}
