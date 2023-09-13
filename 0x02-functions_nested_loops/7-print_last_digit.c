#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: number to check for last digit
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i *= -1;
	_putchar('0' + i);
	return (i);
}
