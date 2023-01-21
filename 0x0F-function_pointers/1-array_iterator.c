#include "function_pointers.h"

/**
 * array_iterator - exucutes a function given as a parameter on each element
 *									of an array
 *
 * @array: array of integers to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array != NULL && size > 0 && (*action) != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}

}
