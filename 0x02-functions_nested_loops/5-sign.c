#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: character to check
 *
 * Return: 0 if n is zero
 * return 1 if n is greater than zero
 * otherwise return -1
 */

int print_sign(int n)
{
	int i;
	char a;

	if (n > 0)
	{
		i = 1;
		a = '+';
	}
	else if (n < 0)
	{
		i = -1;
		a = '-';
	}
	else
	{
		i = 0;
		a = '0';
	}

	_putchar(a);
	return (i);
}
