#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int start = 0;

for (start = 0; start < 10; start++)
{
putchar(start + '0');
}
putchar('\n');
return (0);
}
