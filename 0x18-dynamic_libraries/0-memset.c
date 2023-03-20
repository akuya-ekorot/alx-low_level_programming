#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointerd to by s with the constant byte b
 *
 * @s: string
 * @b: character
 * @n: unsigned integer
 *
 * Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
