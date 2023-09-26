#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data
 * of a listint_t linked list
 * @head: pointer to list
 *
 * Return: 0 always
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
