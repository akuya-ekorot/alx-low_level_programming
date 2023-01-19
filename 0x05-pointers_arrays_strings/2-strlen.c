#include "main.h"

/**
* _strlen - returns the length of a string
* @s: pointer to string
* Return: length of string
*/
int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len++;

	return (len);
}
