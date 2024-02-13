#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: binary number to convert
 *
 * Return: 0 if b is NULL or not not binary
 *	else return converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			a <<= 1;
			a += b[i] - '0';
		}
		else
			return (0);
	}
	return (a);
}
