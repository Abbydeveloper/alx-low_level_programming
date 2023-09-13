#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 0, limit = 50;
	long int j = 1, k = 1, l = 0;

	while (i < limit)
	{
		long int n;
		if (j > 4000000)
			break;

		n = j + k;
		if (k % 2 == 0)
			l += k;
		j = k;
		k = n;

		i++;
	}
	printf("%lu\n", l);
	return (0);
}
