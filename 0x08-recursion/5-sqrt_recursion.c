#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * _sqrt - run binary search to find square root
 * @start: number to start search from
 * @end: number to end search at
 * @n: number to find square root of
 *
 * Return: square root
 */

int _sqrt(int start, int end, int n)
{
	int mid;

	if (end >= start)
	{
		mid = (start + end) / 2;

		if ((mid * mid == n) &&
				((mid + 1) * (mid + 1) > n))
			return (mid);
		else if ((mid * mid) < n &&
				mid > 0 &&
				mid * mid != 0)
			return (_sqrt(mid + 1, end, n));
		else
			return (_sqrt(start, mid - 1, n));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to return square root of
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int start = 1, end = n;

	return (_sqrt(start, end, n));
}
