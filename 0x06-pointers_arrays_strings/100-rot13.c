#include "main.h"

/**
 * rot13 - encodes string to rot13
 * @s: string to encode
 *
 *Return: pointer to s
*/
char *rot13(char *s)
{
	int i, j;
	char *letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encode = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(letter + j) != '\0'; j++)
			if (*(s + i) == *(letter + j))
			{
				*(s + i) = *(encode + j);
				break;
			}
	}

	return (s);
}
