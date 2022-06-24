#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
