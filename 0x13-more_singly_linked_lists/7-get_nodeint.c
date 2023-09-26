#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: - pointer to the list
 * @index: parameter to get node
 *
 * Return: 0 always
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head  = head->next;
	}

	return (head);
}
