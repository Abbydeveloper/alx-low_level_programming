#include "main.h"

/**
* main - Prints the alphabet 10 times
*
* Return: nothing
*/

void main(void)
{
char alp[26] = abcdefghijklmnopqrstuvwxyz;

int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(alp[j]);
}
_putchar('\n');
}
}
