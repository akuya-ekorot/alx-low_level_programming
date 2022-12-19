#include "main.h"

/**
* rev_string - reverses a string
* @s: string to reverse
*/
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	len -= 1;

	for (i = 0; i < (len + 1) / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - i));
		*(s + (len - i)) = temp;
	}
}
