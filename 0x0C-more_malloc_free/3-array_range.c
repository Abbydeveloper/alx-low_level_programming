#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
		return (NULL);

	i = max - min + 1;
	p = malloc(sizeof(int) * i);
	if (p == NULL)
		return (NULL);

	i = 0;
	for (j = min; j <= max; j++)
	{
		p[i] = j;
		i++;
	}
	return (p);
}
