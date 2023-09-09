#include <stdio.h>

/**
 * main - Print all the numbers of the base 16 in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
