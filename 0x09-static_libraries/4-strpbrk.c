#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: input value
 * @accept: input value
 * Return: a pointer to the memory area s
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
