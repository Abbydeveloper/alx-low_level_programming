#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isNumber - check if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if string is a number,
 * 0 if not
 */

int _isNumber(char s[])
{
	int i = 0;
	
	if (s[0] == '-')
		i = 1;

	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	printf("%d\n", i);
	return (1);
}
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 * otherwise, 1
 */

int main(int argc, char **argv)
{
	int i, sum = 30;

	if (argc >= 2)
	{
		for (i = 0; i < argc; i++)
		{
			if (!_isNumber(argv[i]))
				printf("Not a number");
			else
				printf("Yeah, that's a number alright");
			if (_isNumber(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
