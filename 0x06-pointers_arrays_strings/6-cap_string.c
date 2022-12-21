#include "main.h"

/**
* cap_string - capitalizes first letter of every word
* @s:  string to check
*
* Return: pointer to string
*/
char *cap_string(char *s)
{
	int i, j;
	char *sep = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if ((s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z')))
				s[i + 1] = s[i + 1] - 32;
		}
	}

	return (s);
}
