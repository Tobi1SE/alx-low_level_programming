#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - this function as a netted loop tomake grid
 * @width: input value
 * @height: input value
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **see;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	see = malloc(sizeof(int *) * height);

	if (see == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		see[x] = malloc(sizeof(int) * width);

		if (see[x] == NULL)
		{
			for (; x >= 0; x--)
				free(see[x]);

			free(see);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			see[x][y] = 0;
	}

	return (see);
}

