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
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
putchar('\n');

return (0);
}

