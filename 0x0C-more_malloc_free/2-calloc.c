#include <stdlib.h>
/**
 * *_calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int a;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		*(memory + a) = 0;
	return ((void *)memory);
}
