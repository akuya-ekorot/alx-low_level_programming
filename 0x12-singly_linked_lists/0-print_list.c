#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t to print
 *
 * Return: The number of nodes in list_t
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("%s", ("[0] (nil)\n"));
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
