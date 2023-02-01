#include "lists.h"

/**
 * sum_listint - return the sum of all the data(n) of a singly linked list
 * @head: head node of the list
 *
 * Return: Sum of data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	tmp = head;

	for (sum = 0; tmp;)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
