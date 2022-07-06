#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs operations
 * @argc: defines length of the arguments
 * @argv: defines the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int j;
int (*result)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1])
{
printf("Error\n");
exit(99);
}
result = get_op_func(argv[2]);
if (result == NULL)
{
printf("Error\n");
exit(99);
}
i = atoi(argv[1]);
j = atoi(argv[3]);
printf("%d\n", result(i, j));
return (0);
}
