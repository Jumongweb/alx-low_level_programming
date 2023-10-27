#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;
	return (b);
}
