#include "main.h"
/**
 * _isdigit - a function that look for digit
 *@c: parameter to be checked
 *
 * Return: 1 if digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
