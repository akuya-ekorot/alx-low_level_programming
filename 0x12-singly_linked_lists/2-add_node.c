#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: node to add.
 * @str: string element of the node
 *
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int n;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str && str[n]; n++)
	{
	}

	new->len = n;

	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
	}

	*head = new;

	return (*head);
}