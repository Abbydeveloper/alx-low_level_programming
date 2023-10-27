#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 * @n: number of bytes of src to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (n > j)
		n = j;
	for (; k < n; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
