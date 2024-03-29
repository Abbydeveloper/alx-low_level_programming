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
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
