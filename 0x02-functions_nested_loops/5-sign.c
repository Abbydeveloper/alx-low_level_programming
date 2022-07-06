#include "main.h"

/**
* print_sign - Print the sign of a number
* @n: type int integer, can be negative or positive
* Return: 1 if number is positive, -1 if number is negative, 0 if number is 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
