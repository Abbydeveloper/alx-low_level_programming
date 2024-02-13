#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to check through
 * @index: index of the bit to get
 *
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < 64; i++)
	{
		if (n == 0)
			return (0);
		if (i == index)
			return (n & 1);
		n = n >> 1;
	}

	return (-1);
}
