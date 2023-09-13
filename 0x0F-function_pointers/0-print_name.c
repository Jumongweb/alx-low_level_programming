#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a funtion that print name using function pointer
 * @name: input value
 * @f: function pointer
 *
 * Return: 0 always
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

