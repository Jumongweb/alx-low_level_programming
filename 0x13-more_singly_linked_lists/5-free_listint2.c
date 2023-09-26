#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list
 * @head: pointer to list
 *
 * Return: 0 always
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
