#include <stdio.h>

/**
 * natural - print the sum of all multiples of 3 or 5 below 1023
 *
 */

void natural(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n", j);
}
