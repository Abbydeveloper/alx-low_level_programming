#include <stdio.h>
#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: string to check
 *
 * Return: number of bytes in s that consist only of bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k;

	while (s[i] != '\0')
	{
		while (s[i] != accept[j])
		{
			if (accept[j] == '\0')
			{
				k = i;
				return (k);
			}
			j++;
		}
		j = 0;
		i++;
	}
	k = i;
	return (k);
}
