#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition operation
 * @a: first number to add
 * @b: second number to add
 *
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first number
 * @b: second number
 *
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operation
 * @a: first number
 * @b: second number
 *
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division operation
 * @a: first number
 * @b: second number
 *
 * Return: result of of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of a/b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
