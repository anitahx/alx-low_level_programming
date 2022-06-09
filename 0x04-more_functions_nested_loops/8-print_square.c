#include "main.h"
/**
 * print_square - print a square
 * @size: argument
 *
 * Description: print out the required result
 *
 * Return: return void
 *
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else if (size <= 0)
		_putchar('\n');
}
