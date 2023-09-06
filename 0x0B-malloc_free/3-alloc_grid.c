#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that return a pointer
 * to a two dimensional array of integers
 * @width: input value
 * @height: input value
 *
 * Return: 0 always
 */

int **alloc_grid(int width, int height)
{
	int **alpha;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	alpha = malloc(sizeof(int *) * height);

	if (alpha == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		alpha[a] = malloc(sizeof(int) * width);

		if (alpha[a] == NULL)
		{
			for (; a >= 0; a--)
				free(alpha[a]);

			free(alpha);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			alpha[a][b] = 0;
	}

	return (alpha);
}
