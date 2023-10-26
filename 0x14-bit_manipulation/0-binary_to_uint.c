#include "main.h"
/**
 * binary_to_unit - a function that converts a binary number
 * to an unsigned int
 * @x: pointer to string
 * @y: input value
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *y)
{
	unsigned int value = 0;
	int x;

	if (!y)
		return (0);
	for (x = 0; y[x]; y++)
	{
		if (y[x] < '0' || y[x] > '1')
			return (0);
	value = 2 * value + (y[x] - '0');
	}
	return (value);
}
