#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n - number to convert to binary
 */

void print_binary(unsigned long int n)
{
	char[] a;
	int i;

	while(n)
	{
		if (n & 1)
			a += '1';
		else
			a += '0';
		n >>=1;
	}

	for (i = len(a); i >= 0; i--)
		_putchar(str[i]);
}
