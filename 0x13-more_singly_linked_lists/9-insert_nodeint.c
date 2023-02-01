#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head node
 * @idx: index to insert new node
 * @n: data(n) for the new node
 *
 * Return: pointer to the new node, NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *head;

	for (i = 0; i < idx && tmp; i++)
		tmp = tmp->next;

	if (tmp)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
