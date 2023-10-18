#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pinter to cmp function
 *
 * Return: index of first element for which cmp function does not
 * return 0
 * if no element is matched return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		a = cmp(array[i]);
		if (a != 0)
			return (i);
	}

	return (-1);
}
