#include "main.h"

/**
 * print_alphabet*10 - A function that print alphabet 10 times
 *
 * Return: 0 success
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	_putchar('\n');
	}
}
