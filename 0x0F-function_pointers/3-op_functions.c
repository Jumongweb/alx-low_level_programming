#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum of two numbers.
 * @a: input value.
 * @b: input value.
 *
 * Return: a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return difference of two numbers.
 * @a: input value
 * @b: input value
 *
 * Return: a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 * @a: input value.
 * @b: input value.
 *
 * Return: a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers.
 * @a: input value.
 * @b: input value.
 *
 * Return: a / b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of two numbers after dividing.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

