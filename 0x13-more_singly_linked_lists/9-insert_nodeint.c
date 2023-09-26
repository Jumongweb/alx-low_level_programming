#include "lists.h"
/**
 * create_node -  a function that create a new node
 * @n: input value
 *
 * Return: newNode
 */

listint_t *create_node(int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	return (newNode);
}

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 * @head: pointer to the list
 *
 * @idx: input value
 * @n: input value
 *
 * Return: 0 always
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *old_temp;
	listint_t *newNode;
	unsigned int i;

	temp = *head;
	newNode = create_node(n);
	if (head == NULL || newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	if (idx == 0)
		*head = newNode;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		newNode->next = temp;
	else
	{
		old_temp = temp->next;
		temp->next = newNode;
		newNode->next = old_temp;
	}
	return (newNode);
}
