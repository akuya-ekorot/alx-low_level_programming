#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a node at the end of a linked list
 * @head: first node in the list
 * @str: node->str value
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	new = malloc(sizeof(size_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		new->str = NULL;
	else
		new->str = strdup(str);

	new->next = NULL;
	new->len = 0;

	while (new->str[new->len] && str)
		new->len++;

	if (*head == NULL)
	{
		*head = malloc(sizeof(size_t));
		if (*head == NULL)
			return (NULL);
		*head = new;
		return (*head);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
