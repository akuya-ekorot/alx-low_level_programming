#include "main.h"

/**
 * free_grid - frees a 2 dimmensional grid
 *
 * @grid: 2D array
 * @height: rows in 2D array
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
