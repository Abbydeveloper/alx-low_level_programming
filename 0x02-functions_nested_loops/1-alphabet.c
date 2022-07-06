#include "main.h"

/**
* print_alphabet - Prints alphabet
*
* Return: 0 (Success)
*/

void print_alphabet(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";

int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(alp[i]);
}
_putchar('\n');


}


