#include "lists.h"
/**
 * add_nodeint_end - a function to add node to the end
 * of listint_t list
 * @head: pointer to the list
 * @n: input value
 *
 * Return: n;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	(void)temp;

	newNode = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
