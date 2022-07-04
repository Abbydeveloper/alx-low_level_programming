#include <ctype.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lower and uppercase using putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(toupper(alp[i]));
}
putchar('\n');
return (0);
}
