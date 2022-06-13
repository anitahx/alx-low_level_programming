#include "main.h"

/**
 * _puts - prints a string, in reverse
 * @str: value to be evaluate.
 * Return: null.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
