#include <stdio.h>

/**
 * main - print alphabets in lowercase and uppercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
