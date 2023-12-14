#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: parameter to check the length
 *
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
