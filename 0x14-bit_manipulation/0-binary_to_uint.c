#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unigned int
 * @b: pointer to string
 *
 * Return: 0 always
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int a;

	if (!b)
	return (0);

	for (a = 0; b[a]; b++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		value = 2 * value + (b[a] - '0');
	}
	return (value);
}
