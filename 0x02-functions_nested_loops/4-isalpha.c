#include "main.c"

/**
* _isalpha - Check for alphabetic character
* @c: character to check
*
* Return: 1 (Success)
* On error, return 0

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
