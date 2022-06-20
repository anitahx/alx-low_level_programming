#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes in the string
 * @s: input value
 * Return: a pointer to the memory area s
 */

char *_strpbrk(char *s, char *accept)

{
return (strpbrk(s, accept));
}
