#include <stdio.h>

/**
 * main - a function that print multiples of 3 and 5 below 1024
 *
 * Return: 0 success
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
