#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}


/**
 * positive_or_negative - checks and prints numbers positive or negative
 *
 * Return: void
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
		printf("%d is negative\n", i);
}
