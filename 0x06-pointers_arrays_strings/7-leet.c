#include "main.h"

/**
 * leet - encodes string to 1337
 * @s: string to encode
 *
 * Return: pointer to s
*/
char *leet(char *s)
{
	int i, j;
	char *leet = "aAeEoOtTlL";
	char *encode = "4433007711";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(leet + j) != '\0'; j++)
		{
			if (*(s + i) == *(leet + j))
				*(s + i) = *(encode + j);
		}
	}

	return (s);
}

