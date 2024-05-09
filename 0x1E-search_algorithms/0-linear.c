#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers using
 * the linear search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: -1 if value is not present or array is NULL
 * else return first index where value is located
 */

int linear_search(int *array, size_t size, int value):
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		return (i);
	}
	return (-1);
}
