#include <stdio.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @n: value to compute for
 * Return: the absolute value
 */

int _abs(int n)
{
	int i;

	if (n < 0)
		i = n * -1;
	else
		i = n;
	return (i);
}
