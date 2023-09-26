#include "lists.h"
/**
 * listint_len - a function to return number of element
 *		in a linked listint_t list
 * @h: pointer to list
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t node;

	if (h == NULL)
		return (0);

	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}
	return (node);
}
