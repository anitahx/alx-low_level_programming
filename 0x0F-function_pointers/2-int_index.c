#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: first element index,on succes or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);

	}
		return (-1);
}
