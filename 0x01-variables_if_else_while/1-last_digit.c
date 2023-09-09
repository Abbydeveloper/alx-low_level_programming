#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print last digit of number stored in n
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n, r;
	char str[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	r = abs(n % 10);
	/* str = "Last digit of "; */

	if (r > 5)
		printf("%s%d is %d and is greater than 5\n", str, n, r);
	else if (r < 6 && r > 0)
		printf("%s%d is %d and is less than 6 and not 0\n", str, n, r);
	else if (r == 0)
		printf("%s%d is %d and is 0\n", str, n, r);
	return (0);
}
