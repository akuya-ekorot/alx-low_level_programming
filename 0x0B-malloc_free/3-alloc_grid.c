#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimmensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: int**, 2D array
*/
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			free(array[i]);
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			*(array[i] + j) = 0;
	}

	return (array);
}
