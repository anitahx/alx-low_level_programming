#include <stdio.h>
#include <stdlib.h>
/**
 * main - function which prints opcode of the main function
 * @argc: arguments' length
 * @argv: contains arguments
 * Return: 0
 */

int main(int argc, char **argv)

{
	int i;
		if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < atoi(argv[1]) - 1)
	{
		printf("%02hhx ", ((char *) main)[i]);
		i++;
	}
	printf("%02hhx\n", ((char *) main)[i]);
	return (0);
}
