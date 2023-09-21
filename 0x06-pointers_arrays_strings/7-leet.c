#include "main.h"
#include <stdio.h>

/**
 * leet - encode a string int 1337
 *
 * @s: string to encode
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	char i[] = "AaEeOoTtLl";
	char j[] = "4433007711";
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; i[l] != '\0'; l++)
		{
			if (s[k] == i[l])
				s[k] = j[l];
		}
	}
	return (s);
}
