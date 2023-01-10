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
	int **array;
	int i, j;
	int *row;

	if (width <= 0 || height <= 0)
		return (NULL);

	row = malloc(sizeof(int) * width);

	if (row == NULL)
		return (NULL);

	array = malloc(sizeof(row) * height);

	if (array == NULL)
	{
		free(row);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(row + j) = 0;
		}
		*(array + i) = row;
	}

	return (array);
}
