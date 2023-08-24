#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * to uppercase.
 * @n: parameter
 *
 * Return: 0 always
 */

char *string_toupper(char *n)
{
	int c;

	c = 0;
	while (n[c] != '\0')
	{
		if (n[c] >= 'a' && n[c] <= 'z')
			n[c] = n[c] - 32;
		c++;
	}
	return (n);
}
