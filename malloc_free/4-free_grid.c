#include "main.h"

/**
 * free_grid - frees a 2D array created using malloc
 * @grid: pointer to array of intes (pointer pointer)
 * @height: height of array
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
