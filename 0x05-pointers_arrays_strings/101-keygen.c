#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords for crackme
 *
 * Return: Always 0.
 */

int main(void)
{
	char pwd[64];
	int i = 0,
	    n = 2772,
	    sum = 0,
	    tmp;

	srand(time(0));

	while (i < 64)
	{
		if (n - sum > 126)
		{
			tmp = rand() % 83 + 44;
		}
		else if (n - sum < 126 || n - sum > 44)
		{
			tmp = n  - sum;
			*(pwd + i) = tmp;
			*(pwd + i + 1) = '\0';
			break;
		}
		else
		{
			i = 0;
			sum = 0;
			continue;
		}

		sum += tmp;
		*(pwd + i) = tmp;
		*(pwd + i + 1) = '\0';
		i++;
	}
	printf("%s\n", pwd);

	return (0);
}
