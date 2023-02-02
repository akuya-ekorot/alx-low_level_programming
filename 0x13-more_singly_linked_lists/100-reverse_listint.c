#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head node
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;
	next = (*head)->next;

	while (next)
	{
		(*head)->next = prev;
		prev = *head;
		*head = next;
		next = (*head)->next;
	}

	(*head)->next = prev;

	return (*head);
}
