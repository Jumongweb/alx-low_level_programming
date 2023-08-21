#include "main.h"
/**
 * puts2 - a function that print one character out of two
 * @str: parameter given
 *
 * Return: always 0;
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (o = 0 ; o <= b ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
