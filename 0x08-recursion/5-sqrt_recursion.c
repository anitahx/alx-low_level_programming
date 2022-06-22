#include "main.h"

/**
 * sqtRecursive - computes square root recursively doing binary search
 * @start: inital number
 * @end: last number within the limit of number
 * @n: given number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqtRecursive(int start, int end, int n)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == n)
			return (mid);
/* following binary search */
		if (mid * mid > n)
			return (sqtRecursive(start, mid - 1, n));
		if (mid * mid < n)
			return (sqtRecursive(mid + 1, end, n));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursive(2, n, n));
}
