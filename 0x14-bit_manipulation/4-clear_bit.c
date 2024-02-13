#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set the value of bit to 1 at a given index
 * @n: number to set
 * @index: index of bit to change
 *
 * Return: 1 if successful or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < 64)
	{
		i = 1 << index;
		if (*n & i)
			*n ^= i;
		return (1);
	}
	return (-1);
}
