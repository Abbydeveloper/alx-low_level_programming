#include <stdio.h>

/**
 * main - print string to standard error
 *
 * Return: return integer
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fputs(str, stdout);
	fputs("\n", stdout);
	return (1);
}
