#include <stdio.h>
/**
 * main - entry point
 * Return: (0) - success
 */
int main(void)
{
int i, j, z;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (z = 0; z <= 9; z++)
{
if (i != j && j != z && i != z && i < j && z > j)
{
putchar(i + '0');
putchar(j + '0');
putchar(z + '0');
if (!(i == 7 && j == 8 && z == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

