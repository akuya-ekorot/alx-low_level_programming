#include "main.h"

/**
* _strncpy - copies a string
* @dest: buffer to copy string to
* @src: string to copy
* @n: at most n bytes are copied to des
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && *(src + i) != '\0'); i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
