#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Description: prints the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char n;

	int i = 1;

	while (i <= 10)

	{
		n = 'a';
		while (n <= 'z')

	{
		_putchar(n);
		n++;
	}

		_putchar('\n');
		i++;
	}
}
