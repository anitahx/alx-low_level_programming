#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 * @a: value to be evaluate.
 * @b: value to be evaluate.
 * Return: not.
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
