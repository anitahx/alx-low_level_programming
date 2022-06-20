#include "main.h"

/**
 * *_strchr - locates character in string
 * @s: the string
 * @c: the character
 * Return: a pointer to the memory of a character
 */

char *_strchr(char *s, char c)

{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		return (&s[a]);
	}
	return (0);
}
