#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array of integers using
 * the binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: if value is not present or if array is NULL, return -1
 * else return index where value is found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i = 0;


	if (array == NULL)
		return (-1);

	while (left < size)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = (left + right) / 2;
	
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
