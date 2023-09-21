#include <stdio.h>
#include "main.h"

/**
 * void reverse_array(int *a, int n)
 * @a: array to reverse
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, k = n -1;

	i = ((n % 2) == 0) ? (n / 2) : (n - 1) / 2;

	for (j = 0; j < i; j++)
	{
		int temp;
		temp = a[j];
		a[j] = a[k - j];
		a[k - j] = temp;
	}
}
