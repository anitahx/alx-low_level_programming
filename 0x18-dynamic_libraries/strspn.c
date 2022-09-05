#include "main.h"
#include <string.h>
/**
 * _strspn - calculates the length of a prefix string
 * @s: string
 * @accept: has bytes that may or may not be part of the string
 * Return: number of bytes that make up the length
 */

unsigned int _strspn(char *s, char *accept)

{
return (strspn(s, accept));
}
