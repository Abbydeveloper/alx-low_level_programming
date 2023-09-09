#include <stdio.h>

/**
 * main - Print possible combinations of two two-digit numbers
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j, k, l;

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
						for (l = 0; l < 10; l++)
						{
							if (l > k)
							{
								putchar(i + '0');
								putchar(j + '0');
								putchar(' ');
								putchar(k + '0');
								putchar(l + '0');

								if (l < 10 && k < 10 && j < 10 && i < 10)
								{
									putchar(',');
									putchar(' ');
								}
							}
						}
					}
				}
			}
		}
	}
	return (0);
}
