#include <stdio.h>
/**
*main - Entry point
*Descripton: "prints the size of various files"
*Return: Always 0 (Success)
*/
int main(void)

{

int v;
long int w;
long long int x;
char y;
float z;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);

}
