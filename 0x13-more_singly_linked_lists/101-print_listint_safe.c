#include "lists.h"

/**
 * freeList - a function to free list.
 * @head: pointer to the list
 *
 * Return: 0 always
 */

void freeList(list_ptr **head)
{
	list_ptr *temp;
	list_ptr *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - a function that prints a listint_t list safely.
 * @head: pointer to list
 *
 * Return:number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	list_ptr *headptr, *new, *join;

	headptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->ptr = (void *)head;
		new->next = headptr;
		headptr = new;

		join = headptr;

		while (join->next != NULL)
		{
			join = join->next;
			if (head == join->ptr)
			{
			printf("->  [%p] %d\n", (void *)head, head->n);
			freeList(&headptr);
			return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
}
	freeList(&headptr);
	return (nodes);
}
