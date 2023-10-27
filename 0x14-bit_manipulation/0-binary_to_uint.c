#include "main.h"

/**
 * binary_to_unit - a function that converts a binary number
 * to an unsigned int
 * @a: input value
 * @b: input value
 *
 * Return: 0 always
 */

int _pow(int a, int b)
{
	int i, sum = 0;

	for (i = 0; i < b; i++)
		sum *= a;
	return (sum);
}

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: string contains 0's and 1's
 *
 * Return: 0 always
*/

unsigned int binary_to_uint(const char *b)
{
	int digit, index, total = 0;

	if (!b)
		return (0);
	index = (strlen(b) - 1);
	while (*b)
	{
		digit = (*b) - '0';
		if (digit == 0 || digit == 1)
		{
			total += (_pow(2, index)) * digit;
			index--;
			b++;
		}
		else
		{
			return (0);
		}
	}
	return ((unsigned int) total);
}
