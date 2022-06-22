#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to consider
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

		if (n > 0)
		{
			return (n / _sqrt_recursion(n - 1));
		}
}
