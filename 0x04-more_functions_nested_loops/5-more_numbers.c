#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 *
 * Description: print out the required result
 *
 * Return: return void
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
