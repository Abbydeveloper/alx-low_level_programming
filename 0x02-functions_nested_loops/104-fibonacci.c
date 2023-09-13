#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 0, limit = 98;
	unsigned long int j = 1, k = 1, k1, k2, j1, j2;

	for (i = 0; i < 91; i++)
	{
		unsigned long int n;

		n = j + k;

		printf("%lu, ", k);
		j = k;
		k = n;
	}

	k1 = k / 1000000000;
	k2 = k % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (i = 91; i < limit; i++)
	{
		unsigned long int n1, n2;

		n1 = j1 + k1;
		n2 = j2 + k2;

		if (i < limit - 1)
			printf("%lu, ", k1 + (k2 / 1000000000));
		else
			printf("%lu\n", k1 + (k2 % 1000000000));
		j1 = k1;
		j2 = k2;
		k1 = n1;
		k2 = n2;
	}
	return (0);
}
