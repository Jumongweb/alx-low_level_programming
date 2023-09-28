#include "main.h"

/**
 * set_bit - a function that set the value of a bit
 * to 1 at a given index
 * @n: value to be searched
 * @index: index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	b = 1;
	b = b << index;
	*n = ((*n) | b);
	return (1);
}
