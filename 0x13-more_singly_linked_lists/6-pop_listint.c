#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer to the list
 *
 * Return: 0 always
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (head == NULL || *head == NULL)
		return (0);
	a = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (a);
}
