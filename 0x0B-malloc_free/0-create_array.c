#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that create an array of char
 * and initialize it with a specific char
 * @size: number of array
 * @c: input value
 *
 * Return: 0 always
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
