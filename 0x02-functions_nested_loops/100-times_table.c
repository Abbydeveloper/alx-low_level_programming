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
 * print_ times_table - print the 9 times table
 *
 * @n: n times table
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;

		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (j >= 1)
			{
				_putchar(',');
				_putchar(' ');
				if (k < 100 && k > 9)
					_putchar(' ');
				else if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			print(k);
		}
		_putchar('\n');
	}
}
