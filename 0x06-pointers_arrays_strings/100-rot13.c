#include "main.h"

/**
 * rot13 - encodes string to rot13
 * @s: string to encode
 *
 *Return: pointer to s
*/
char *rot13(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* encode first 13 characters in the alphabet */
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
			continue;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] = s[i] - 13;
	}

	return (s);
}
