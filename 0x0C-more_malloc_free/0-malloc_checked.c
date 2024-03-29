#include "main.h"

/**
* malloc_checked - allocates memory using malloc
*
* @b: unsigned int. Size of memory to allocate
*
* Return: pointer to memory allocated
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
