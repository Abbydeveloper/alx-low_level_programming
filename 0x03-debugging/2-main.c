#include <stdio.h>
#include "main.h"

/**
 * main - print
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 72;
	b = 99;
	c = 998;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);

	return (0);
}

