#include <stdio.h>
#include "main.h"
#include "limits.h"

/**
 * print_number - print an integer
 * @n: number to print
 *
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		n = n * -1;
		_putchar(45);
	}
	if (n == 0)
		_putchar('0');

	for (i = 1000000000; i >= 1; i /= 10)
	{
		if (n >= INT_MAX || n <= INT_MIN)
			n = INT_MAX;

		if (n / i != 0)
			_putchar((n / i) % 10 + '0');
	}

}
