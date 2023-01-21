#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers to search
 * @size: number of elements in @array
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not
 * return 0. If no element matches, return -1. if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, idx;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			idx = cmp(array[i]);

			if (idx)
				return (i);
		}
	}

	return (-1);
}
