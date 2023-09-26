#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 *		of a listint_t list.
 * @head: pointer to list
 * @n: input value
 *
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	newNode->n = n;

	*head = newNode;

	return (newNode);
}
