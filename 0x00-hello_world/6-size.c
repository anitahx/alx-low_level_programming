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

printf("Size of a char: %zu byte(s)\n", sizeof(y));
printf("Size of an int: %zu byte(s)\n", sizeof(v));
printf("Size of a long int: %zu byte(s)\n", sizeof(w));
printf("Size of a long long int: %zu byte(s)\n", sizeof(x));
printf("Size of a float: %zu byte(s)\n", sizeof(z));
return (0);

}
