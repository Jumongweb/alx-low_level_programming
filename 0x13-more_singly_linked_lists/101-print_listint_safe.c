#include "lists.h"
#include <stdio.h>

size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the list
 *
 * Return: 0 always
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *alpha, *beta;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	alpha = head->next;
	beta = (head->next)->next;

	while (beta)
	{
		if (alpha == beta)
		{
			alpha = head;
			while (alpha != beta)
			{
				nodes++;
				alpha = beta->next;
				beta = beta->next;
			}

			alpha = alpha->next;
			while (alpha != beta)
			{
				nodes++;
				alpha = alpha->next;
			}

			return (nodes);
		}

		alpha = beta->next;
		beta = (beta->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t list safely.
 * @head: pointer to list
 *
 * Return:number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
