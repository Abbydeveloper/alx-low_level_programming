#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: Character to check
* Return: 1 (On Success)
* On error 0 is returned and errno is set appropriately
*/

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
