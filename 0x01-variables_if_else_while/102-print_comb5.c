#include <stdio.h>

/**
 * main - Print possible combinations of two two-digit numbers
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j, k;

	k = 100;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (j > i)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if ( j <= k-1  && i < k - 2)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
