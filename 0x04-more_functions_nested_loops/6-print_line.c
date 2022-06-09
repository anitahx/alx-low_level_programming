#include "main.h"
/**
 * print_line - print the shortest distance between two points
 * @n: argument for the function
 *
 * Description: print out the required result
 *
 * Return: return void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		} else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
