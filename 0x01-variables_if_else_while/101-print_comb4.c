#include <stdio.h>

/**
 * main - Print all possible combinations of 3 digits
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				for (k = 0; k < 10; k++)
				{
					if (k > j)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
						if (k < 9 && j < 89 && i < 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
