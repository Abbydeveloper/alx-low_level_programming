#include <stdio.h>

/**
 * main - print alphabets excet q and e in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
