#include "main.h"

/**
 * clear_bit - a function to clear the value of a bit
 * at given index
 * @n: pointer
 * @index: index
 * Return: 0 always
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
