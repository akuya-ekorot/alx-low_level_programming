#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t list
 * @h: linked list
 *
 * Return: length of a singly linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
