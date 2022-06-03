#include <stdlib.h>
#include <time.h>
/*more headers go here*/
#include <stdio.h>
/*betty style doc for function main goes here*/
/**
 * main -use to check for conditions
 *
 * Description: return the results when the conditions are met
 *
 * Return: return integer 0
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here*/
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
