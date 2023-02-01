#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a singly linked list
 * @head: double pointer to singly linked list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	while (tmp)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}

	head = NULL;
}
