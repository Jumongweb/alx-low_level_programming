#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of a listint_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	if (h == NULL)
		return (0);

	for (node = 0; h != NULL; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
