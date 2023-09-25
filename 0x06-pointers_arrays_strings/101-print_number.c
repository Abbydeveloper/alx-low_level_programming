#include <stdio.h>
#include "main.h"
#include "limits.h"
/**
 * print_digit - print digit
 * @n: digit to print
 * @i: number of times to loop
 */
void print_digit(int n, int i)
{
	for (; i >= 1; i /= 10)
	{
		if (n / i != 0)
			_putchar((n / i % 10) + '0');
	}
}

/**
 * print_number - print an integer
 * @n: number to print
 */
void print_number(int n)
{
	int i;

	if (n <= INT_MIN)
	{
		int a, b;

		n = INT_MIN;
		a = (n / 10000) * -1;
		b = (n % 10000) * -1;
		_putchar(45);
		print_digit(a, 100000);
		print_digit(b, 100000);
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar(45);
		}
		if (n = 0)
			_putchar(0 + '\0');
		i = 1000000000;
		print_digit(n, i);
	}

}
