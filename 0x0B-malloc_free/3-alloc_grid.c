#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Create 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array on success
 * NULL on failure or if height or width is zero
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
