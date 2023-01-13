#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to include
 *
 * Return: pointer to newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size_s1, size_s2;
	char *str;

	size_s1 = 0;
	size_s2 = 0;

	/* find size to allocate to str */
	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i); i++)
			size_s1++;
	}

	if (s2 != NULL)
	{
		for (i = 0; *(s2 + i); i++)
			size_s2++;

		if (size_s2 > n)
			size_s2 = n;
	}

	/* allocate memory to str */
	str = malloc((size_s1 + size_s2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	/* copy s1 to str */
	for (i = 0; i < size_s1; i++)
		*(str + i) = *(s1 + i);

	/* copy s2 to str */
	for (i = 0; i < size_s2; i++, size_s1++)
		*(str + size_s1) = *(s2 + i);

	/* add terminating null byte */
	*(str + size_s1) = '\0';

	return (str);
}
