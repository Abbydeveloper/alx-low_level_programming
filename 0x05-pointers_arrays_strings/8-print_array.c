#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 *
 * @a: pointer to array to print
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i >= 0 && i < n - 1)
			printf(", ");
	}
	printf("\n");
}

