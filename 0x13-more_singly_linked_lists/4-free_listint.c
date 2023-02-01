#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: singly linked list to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;

	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
