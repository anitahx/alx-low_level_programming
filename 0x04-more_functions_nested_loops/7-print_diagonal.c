#include "main.h"
/**
 * print_diagonal - print out diagonal shape
 * @n: argument for the function
 *
 * Description: print out the required result
 *
 * Return: return void
 *
 */
void main(void)
{
	int i;
	int j;

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
