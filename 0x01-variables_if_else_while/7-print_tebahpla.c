#include <stdio.h>
/**
 * main - print out the result of the function
 * Description: print out the alphabets in reverse
 * Retun: return integer value o
 */
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
