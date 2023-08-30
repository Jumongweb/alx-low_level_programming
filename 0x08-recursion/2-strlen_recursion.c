#include <stdio.h>
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: parameter pointer
 *
 * Return: 0 always
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
