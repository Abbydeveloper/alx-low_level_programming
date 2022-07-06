#include "main.h"

/**
* main - Prints alphabet
*
* Return: 0 (Success)
*/

int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";

int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(alp[i]);
}
_putchar('\n');

return (0);
}


