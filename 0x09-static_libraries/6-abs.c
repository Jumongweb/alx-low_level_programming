#include "main.h"

/**
 * _abs - a function that compute the absolute value of an integer
 * @a: the value to be checked
 * Return: 0 if sccess or 1 if fails
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
