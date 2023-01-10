#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 *
 * @size: size of array
 * @c: character to initialize the array with
 *
 * Return: Pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
