#include "main.h"

/**
 * _atoi - a function that convert a string into an integer
 * @s: parameter given
 *
 * Return: 0 always
 */

int _atoi(char *s)
{
	int a, b, c, d, length, number;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	length = 0;
	number = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			number = s[a] - '0';
			if (b % 2)
				number = -number;
			c = c * 10 + number;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

