#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i, n = 612852475143, l;

	l = sqrt(n);

	for (i = 1; i < l; i += 2)
	{
		if ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
