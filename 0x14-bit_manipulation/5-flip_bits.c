#include "main.h"

/**
 * flip_bits - a function that return the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: input value
 * @m: input value
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, value = 0;
	unsigned long int current;
	unsigned long int x_or = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = x_or >> a;
		if (current & 1)
			value++;
	}

	return (value);
}
