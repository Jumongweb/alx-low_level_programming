#include "main.h"
/**
 * factorial - a function that return the factorial of a given number
 * @n: the number to be given to the function
 *
 * Return: 0 always
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
