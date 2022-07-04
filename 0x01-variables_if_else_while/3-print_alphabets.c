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
int i, j;

for (i = 0; 1 < 26; i++)
{
putchar(alp[i]);
}
for (j = 0; j < 26; j++)
{
putchar(toupper(alp[j]));
}
putchar('\n');
return (0);
}
