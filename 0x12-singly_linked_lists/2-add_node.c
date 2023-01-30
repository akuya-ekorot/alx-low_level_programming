#include "lists.h"
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
	list_t *new;

	new = malloc(sizeof(size_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		new->str = NULL;
	else
		new->str = strdup(str);

	new->len = 0;

	while (new->str[new->len] && str)
		new->len++;

	new->next = (*head);

	*head = new;
	return (*head);
}