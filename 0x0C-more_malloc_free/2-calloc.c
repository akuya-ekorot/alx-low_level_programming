#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size in bytes for each element in the array
 *
 * Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
