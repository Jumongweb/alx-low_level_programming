#include "main.h"
int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: parameter to be checked
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - return the natural
 * square root of a number
 * @n: parameter to calculate the square root
 * @a: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}

