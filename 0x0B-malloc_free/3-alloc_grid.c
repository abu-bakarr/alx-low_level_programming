/**
 * alloc_grid - allocate memory for 2D array
 * @width: array width
 * @height: array height
 * Return: 0
 */
#include "holberton.h"
int **alloc_grid(int width, int height)
{
	int h, w;
	int **twod;

	if (width <= 0 || height <= 0)
		return (NULL);
	twod = malloc(sizeof(int *) * height);
	if (twod == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		twod[h] = malloc(sizeof(int) * width);
		if (twod[h] == NULL)
		{
			free(twod);
			for (w = 0; w <= h; w++)
				free(twod[w]);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			twod[h][w] = 0;
	}
	return (twod);
}
