#include "main.h"

/**
 * flip_bits - a function that return the number bits
 * you would need to flip from one number to another
 * @n: first parameter
 * @m: second parameter
 *
 * Return: 0 always
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	for (; m | n;)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
