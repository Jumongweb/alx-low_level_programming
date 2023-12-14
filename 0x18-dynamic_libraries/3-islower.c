#include "main.h"

/**
 * _islower - A function that chexk for lower case
 * @c: parameter to be checked
 *
 * Return: 1 if successful or 0 if fails
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
