#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a node to the end of a singly linked list
 * @head: double pointer to the starting node
 * @n: int to add as content of the node
 *
 * Return: Address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
