#include "main.h"

/**
 * _strcmp - compares string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[a] - s2 [a]
 */
int _strcmp(char *s1, char *s2)
{

	int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
