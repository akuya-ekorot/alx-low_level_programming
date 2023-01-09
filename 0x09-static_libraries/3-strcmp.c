#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: 0 if s1 and s2 are equal
* - value if s1 is less than s2
* + value if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	for (j = 0; *(s1 + j) != '\0' || *(s2 + j) != '\0'; j++)
	{
		if (*(s1 + j) > *(s2 + j))
		{
			i = *(s1 + j) - *(s2 + j);
			break;
		}

		if (*(s1 + j) < *(s2 + j))
		{
			i = *(s1 + j) - *(s2 + j);
			break;
		}
	}

	return (i);
}
