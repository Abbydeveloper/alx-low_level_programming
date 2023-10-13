#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: array of elements
 * @size: size of array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; p[i] != '\0'; i++)
		p[i] = 0;

	p[i] = '\0';
	return (p);
}
