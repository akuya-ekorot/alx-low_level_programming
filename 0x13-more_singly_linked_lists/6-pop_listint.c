#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node's data
 * @head: double pointer to the head node of the linked list
 *
 * Return: the head node's data or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (data);
}
