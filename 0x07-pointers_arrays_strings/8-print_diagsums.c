#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square
 * matris of integers
 * @a: square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += a[i + (size * j)];
			if ( i + j == size - 1)
				diag2 += a[(i + j) * (size - j)];
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
