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

	chars = 1;
	count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, chars++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, chars++)
		{}
	}

	c = (char *) malloc(sizeof(char) * chars);

	for (i = 0; i < ac; i++, count++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, count++)
			*(c + ((chars + count) - chars)) = *(*(av + i) + j);
		*(c + ((chars + count) - chars)) = '\n';
	}

	return (c);
}
