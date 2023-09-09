#include <stdio.h>

/**
 * main - Print the lower case alphabets in reverse
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
