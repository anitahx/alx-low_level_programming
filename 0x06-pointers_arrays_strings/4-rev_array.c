#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int temp;

	for (b = 0; b < n--; b++)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
	}
}
