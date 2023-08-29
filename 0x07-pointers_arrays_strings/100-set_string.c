#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: parameter pointer
 * @to: parameter pointer
 *
 * Return: 0 always
 */

void set_string(char **s, char *to)
{
	*s = to;
}
