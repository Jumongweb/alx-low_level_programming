#include "lists.h"
/**
 * free_listint - a function that free listint_t list
 * @head: pointer to list
 *
 * Return: 0 always
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
