#include "main.h"
#include <string.h>

/**
 * _strpbrk - srarch a string for a set of bytes
 * @s: input value
 * @accept: input value
 * Return: a pointer to the memory area s
 */

char *_strpbrk(char *s, char *accept)

{
return (strpbrk(s, accept));
}
