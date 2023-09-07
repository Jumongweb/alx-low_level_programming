#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: 0 always
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, value;

	if (min > max)
		return (NULL);

	value = max - min + 1;

	ptr = malloc(sizeof(int) * value);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
