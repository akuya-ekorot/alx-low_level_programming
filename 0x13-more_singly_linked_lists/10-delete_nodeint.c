#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to head node of the linked list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int count;

	curr = *head;
	prev = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		curr->next = NULL;
		free(curr);

		return (1);
	}

	for (count = 0; count < index - 1; count++)
		prev = prev->next;

	curr = prev->next;
	prev->next = curr->next;
	curr->next = NULL;
	free(curr);
	return (1);
}
