#include "main.h"
/**
 * reverse_array - a function that reverse the content of an array
 * @a: parameter to replace b
 * @n: parameter to replace a
 *
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

