#include "main.h"

/**
 * print_last_digit - a function that print the last digit of a number
 * @a: value to be checked
 * Return: 0 success
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
