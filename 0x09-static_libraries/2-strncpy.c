#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes of src to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (src[j] != '\0')
		j++;

	for (; i < n; i++)
	{
		if (k >= j)
			dest[i] = '\0';
		else
			dest[i] = src[k];

		k++;
	}

	return (dest);
}
