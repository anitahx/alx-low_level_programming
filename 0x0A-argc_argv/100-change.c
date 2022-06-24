#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimun number of coins to make change
 * for an amount of money
 * @argc: length of the arguments
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{

	int coins = 0, n;

	if (argc == 2)
	{
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
	}
	else
	{
	while (n != 0)
	{
	if (n - 25 >= 0)
	n -= 25;
	else if (n - 10 >= 0)
	n -= 10;
	else if (n - 5 >= 0)
	n -= 5;
	else if (n - 2 >= 0)
	n -= 2;
	else if (n - 1 >= 0)
	n -= 1;
	coins++;
	}
		printf("%d\n", coins);
	}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
