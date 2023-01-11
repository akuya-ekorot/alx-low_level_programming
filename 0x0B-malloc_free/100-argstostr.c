#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: array of arguements
 *
 * Return: Pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, count;
	unsigned int chars;
	char *c = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	chars = 0;
	i = 0;

	while (i < ac)
	{
		j = 0;
		while (*(*(av + i) + j) != '\0')
		{
			chars++;
			j++;
		}
		chars++;
		i++;
	}
	chars++;

	c = (char *) malloc(sizeof(char) * chars);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, count++)
		{
			*(c + ((chars + count) - chars)) = *(*(av + i) + j);
		}
		*(c + ((chars + count) - chars)) = '\n';
		count++;
	}

	return (c);
}
