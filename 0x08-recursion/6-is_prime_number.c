#include <stdio.h>
#include "main.h"

/**
 * prime_numbers - return if n is a prime number
 * @n: number to check
 * @i: iteration
 *
 * Return: 1 if n is a prime number
 * otherwise, return 0
 */

int prime_numbers(int n, int i)
{
	if (n < 2)
		return (0);
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n > i)
		return (prime_numbers(n, i - 1));
	return (1);
}


/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number
 * otherwise, return 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prime_numbers(n, n / 2));
}
