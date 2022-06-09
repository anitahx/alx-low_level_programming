#include "main.h"

/**
 * print_numbers - prints numbers
 * Description: prints numbers
 * Return: void
 */

void print_numbers(void)
{

	char j;

	j = '0';
	while (j <= '9')
	{
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
