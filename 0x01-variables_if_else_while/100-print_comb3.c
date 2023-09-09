#include <stdio.h>

/**
 * main - print all possible combinations of two digits
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (j <= 9 && i < 8)
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
