#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 0, limit = 50;
	long int j = 1, k = 1;

	while (i < limit)
	{	
		long int n;
		n = j + k;

		if (i < limit - 1)
			printf("%lu, ", k);
		else
			printf("%lu\n", k);
		j = k;
		k = n;
		
		i++;
	}
	return (0);
}
