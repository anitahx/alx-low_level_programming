#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the multiplication of two arguments
 * @argc: length of the arguments
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
			return (1);
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
			return (0);
}
