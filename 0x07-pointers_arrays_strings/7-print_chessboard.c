#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: character array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}

}
