#include <stdio.h>
#include "main.h"

/**
 * flip_bits - return the number of bits you would need to flip to get
 * from one number to another
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) == (m & 1))
			continue;	
		count++;
	}
	return (count);
}
