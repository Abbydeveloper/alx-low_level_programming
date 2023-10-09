#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory area to copy to
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
