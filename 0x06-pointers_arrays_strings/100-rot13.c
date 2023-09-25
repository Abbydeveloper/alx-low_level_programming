#include <stdio.h>
#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: character to encode
 * Return: return encoded character
 */

char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (input[j] == s[i])
			{
				s[i] = output[j];
				break;
			}
		}
	}


	return (s);
}
