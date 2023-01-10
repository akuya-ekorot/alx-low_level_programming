#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to duplicate
 *
 * Return: char *, newly allocated space with duplicated string
*/
char *_strdup(char *str)
{
	int i;
	char *dup;
	size_t size;

	size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		size++;
	size++;

	dup = malloc(sizeof(char) * size);

	if (dup == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(dup + i) = *(str + i);
	*(dup + i) = '\0';

	return (dup);
}
