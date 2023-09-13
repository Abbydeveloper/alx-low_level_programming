#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 1, j = 1;

	while (j < 50)
	{
		printf(j);
		i = j;
		j += i;
		if (j < 50)
			printf(", ");
	}
	return (0);
}
