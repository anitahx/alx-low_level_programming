#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: already allocated size
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	unsigned char *np;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	np = malloc(new_size * sizeof(char));
	if (np == NULL)
		return (NULL);
	a = 0;
	if (new_size > old_size)
	{
		while (a < old_size)
		{
			np[a] = ((char *)ptr)[a];
			a++;
		}
		free(ptr);
		return (np);
	}
/* if new_size < old_size */
	while (a < new_size)
	{
		np[a] = ((char *)ptr)[a];
		a++;
	}
	free(ptr);
	return (np);
}
