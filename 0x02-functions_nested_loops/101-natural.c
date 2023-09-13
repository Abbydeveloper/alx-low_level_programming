#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 below 1023
 *
 * Return: 0 if success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);
}
