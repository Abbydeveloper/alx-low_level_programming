#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory to allocate
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
