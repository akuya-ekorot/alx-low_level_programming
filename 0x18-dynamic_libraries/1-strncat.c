#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: resulting string
* @src: string to add to dest
* @n: number of bytes to use at most from src
*
* Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{}

	for (j = 0; (j < n && *(src + j) != '\0'); j++, i++)
	{
		*(dest + i) = *(src + j);
	}

	if (*(dest + i) != '\0')
		*(dest + i) = '\0';

	return (dest);
}
