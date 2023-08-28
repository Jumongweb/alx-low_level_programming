#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer parameter
 * @size: parameter for int
 * Return: 0 always
 */

void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
