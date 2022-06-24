#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * that fills memory with a constant byte.
 * @s: input value
 * @accept: input value
 * Return: a pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
