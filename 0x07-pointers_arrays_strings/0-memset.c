#include <stdio.h>
#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: memory area pointed to
 * @b: byte to fill with
 * @n: number of bytes of memory to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	while (s[j] != '\0')
		j++;

	if (n > j)
		n = j;
	i = 0;
	
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
