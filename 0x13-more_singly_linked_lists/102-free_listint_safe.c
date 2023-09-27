#include "lists.h"

/**
 * free_listint_safe - a function that frees a linked list
 * @h: pointer to list
 *
 * Return: 0 always
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int a;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
