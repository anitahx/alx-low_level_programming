#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns an addition of positive arguments
 * @argc: length of arguments
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b, result = 0;

	for (a = 1; a < argc; a += 1)
	{
	for (b = 0; (argv[a])[b] != '\0'; b += 1)
	{
	if (((argv[a])[b] - '0') >= 0 && ((argv[a])[b] - '0') <= 9)
	continue;
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	result += atoi(argv[a]);
	}
		printf("%d\n", result);
		return (0);
}
