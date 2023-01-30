#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: size_t, number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		++len;
		h = h->next;
	}

	return (len);
}