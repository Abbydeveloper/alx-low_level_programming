#include <stdio.h>
#include "main.h"

/**
 * isPalindrome - check if string is a palindrome
 * @s: string
 * @i: index counter
 * @j: end of index
 *
 * Return: true if palindrome, false if not
 */

int isPalindrome(char *s, int i, int j)
{
	if (i == 0 && (s[i + 1] == '\0' || s[i] == '\0'))
		return (1);
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (isPalindrome(s, i + 1, j - 1));
}

/**
 * _strlen - get length of string
 * @s: string to get length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen(s + 1);

	return (1 + len);
}

/**
 * is_palindrome - check is a string is a palindrome
 * @s: string to check
 *
 * Return: 1 is string is a palindrome
 * 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (isPalindrome(s, 0, len - 1));
}
