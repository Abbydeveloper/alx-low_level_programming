#include <stdio.h>

/**
 * main - print single digit numbers of base 10 starting from 0
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
