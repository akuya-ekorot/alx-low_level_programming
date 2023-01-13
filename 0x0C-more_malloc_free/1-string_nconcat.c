#include "main.h"

/**
* _strcpy - copies a string pointed to by src, including the terminating null
* byte, to the buffer pointed to by dest
*
* @src: string
* @dest: buffer
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

/**
* _strlen - finds length of a string
*
* @s: string to check
*
* Return: unsigned int, length of string
*/
unsigned int _strlen(char *s)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
		j++;

	return (j);
}

/**
* string_nconcat - concatenates two strings
*
* @s1: first string
* @s2: second string
* @n: n bytes of s2 to include in the concatenated string
*
* Return: newly allocated space in memory containing s1 and first n bytes
* of s2, or NULL if malloc fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, j;
	char *str;

	if (s1 != NULL || *s1 != '\0')
	{
		i = _strlen(s1);
		size = n + i + 1;
		str = malloc(sizeof(char) * size);

		if (str == NULL)
			return (NULL);

		str = _strcpy(str, s1);
	}
	else
	{
		i = 0;
		size = n + 1;
		str = malloc(sizeof(char) * (size + 1));

		if (str == NULL)
			return (NULL);
	}

	if (s2 != NULL)
	{
		for (j = 0; i < size && *(s2 + j) != '\0'; j++, i++)
			*(str + i) = *(s2 + j);
	}

	*(str + i) = '\0';

	return (str);
}
