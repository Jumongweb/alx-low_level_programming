#include "main.h"

/**
 * print alphabet _10x - A code that prints 10 times the alphabet in lowercase.
 *
 * return: 0;
 */

void print_alphabet_x10(void)
{
	int i;

	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	}
	_putchar('\n');
}
