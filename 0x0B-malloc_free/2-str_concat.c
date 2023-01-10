#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: seconde string
 *
 * Return: char *, newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	size_t size_1, size_2;
	unsigned int i, j;
	char *new;

	size_1 = 0, size_2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			size_1++;
	}

	if (s2 != NULL)
	{
		for (i = 0; *(s2 + i) != '\0'; i++)
			size_2++;
	}

	new = malloc(sizeof(char) * (size_2 + size_1 + 1));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < size_1; i++)
		*(new + i) = *(s1 + i);

	j = i;

	for (i = 0; i < size_2; i++, j++)
		*(new + j) = *(s2 + i);

	*(new + j) = '\0';

	return (new);
}
