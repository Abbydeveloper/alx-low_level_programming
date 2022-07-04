#include <ctype.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lower and uppercase using putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; 1 < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
