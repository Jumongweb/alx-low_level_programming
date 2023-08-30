#include "main.h"
/**
 * _pow_recursion -  a function that return the value of x
 * raised to the power of y
 * @x: parameter one
 * @y: parameter two
 *
 * Return: 0 always
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
