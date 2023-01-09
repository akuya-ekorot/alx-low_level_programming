#include "main.h"

/**
 * _memcpy - copies n butes from memory area src to memory area dest
 *
 * @dest: memory area to copy data to
 * @src: memory area to copy data from
 * @n: n bytes of data to copy
 *
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
