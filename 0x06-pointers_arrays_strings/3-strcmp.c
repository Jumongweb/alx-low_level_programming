#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: parameter one
 * @s2: parameter two
 *
 * Return: 0 always
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}

