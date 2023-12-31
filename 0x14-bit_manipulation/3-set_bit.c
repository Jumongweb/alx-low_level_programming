#include "main.h"

/**
 * set_bit - a function to set the value of a bit to 1
 * at given index
 * @n: pointer to number
 * @index: input value
 * Return: 1 if it works otherwise 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
