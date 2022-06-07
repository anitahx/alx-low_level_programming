#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 * Description: prints lowercase alphabet
 * Return: void
 */

void print_alphabet(void)
{

	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
