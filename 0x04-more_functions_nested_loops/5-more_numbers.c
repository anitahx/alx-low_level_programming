#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)

{
	char n;

	int i = 0;

	while (i <= 14)

	{
		n = 0;
		while (n <= 14 + '0')

	{
		_putchar(n);
		n++;
	}

		_putchar('\n');
		i++;
	}
}
