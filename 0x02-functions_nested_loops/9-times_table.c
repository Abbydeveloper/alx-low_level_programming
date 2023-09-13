#include <stdio.h>
#include "main.h"

/**
 * print - print numbers greater than 10 using _putchar
 *
 * @n: number to print
 */

void print(long n)
{
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * times_table - print the 9 times table
 *
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j >= 1)
			{
				_putchar(',');
				_putchar(' ');
				if (k < 10)
					_putchar(' ');
			}
			print(k);
		}
		_putchar('\n');
	}
}
