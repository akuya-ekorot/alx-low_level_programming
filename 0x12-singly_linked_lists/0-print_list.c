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
	size_t count, len;

	count = 0, len = 0;
	while (h)
	{
		while (h->str && h->str[len])
			len++;

		printf("[%lu] ", len);

		if (h->str == NULL)
			printf("%s", ("(nil)\n"));
		else
			printf("%s\n", h->str);

		h = h->next;
		count++;
	}

	return (count);
}
