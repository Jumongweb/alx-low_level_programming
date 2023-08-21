#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter to be swap
 * @b: parameter to be swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

