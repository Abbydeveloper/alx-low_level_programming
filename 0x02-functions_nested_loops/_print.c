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
