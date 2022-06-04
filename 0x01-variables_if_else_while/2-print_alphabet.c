#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - check for conditions
 * Description: return the results for the condition
 * Return: return the integer value 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}

