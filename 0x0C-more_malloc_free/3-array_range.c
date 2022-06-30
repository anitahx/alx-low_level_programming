#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 */

int *array_range(int min, int max)

{
	int *p;
	int a, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (a = 0; a < size && min <= max; a++, min++)
		*(p + a) = min;
	return (p);
}
