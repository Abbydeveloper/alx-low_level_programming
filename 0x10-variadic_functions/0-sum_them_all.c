#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: number of numbers to sum up
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_aarg(ap, int);

	va_end(ap);
	return sum;
}