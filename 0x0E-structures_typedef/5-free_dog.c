#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees struct dog memory
 * @d: struct dog to free
 *
 * Return: 0 always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

