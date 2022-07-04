#include <stdlib.h>
#include <stdio.h>

/**
 * main - print file name
 * Return: always 0
 */

int main(void)

{
	char x[] = "file_name";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
