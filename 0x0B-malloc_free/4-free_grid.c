#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this function as 2d free array
 * @grid: 2d grid
 * @height: height input
 * Description: frees the memeory of the gris
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
