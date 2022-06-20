#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: 2D array
 * @size: size x size of the same matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)

{
	int z;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (z = 0; z < s; z += size + 1)
	{
		tl += a[z];
	}

	for (z = size - 1; z < s - 1; z += size - 1)
	{
		tr += a[z];
	}

	printf("%d, %d\n", tl, tr);
}
