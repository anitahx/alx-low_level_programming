#include "main.h"

/**
 * wildcmp - compares two strings to determine if they are identical
 * @str1: first string parameter
 * @str2: second string parameter
 * Return: 1
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '\0')
	{
		return (1);
	}
	else if (*str1 == '\0' && *str2 == '*')
	{
		return (wildcmp(str1, (str2 + 1)));
	}
	else if (*str1 == '\0' || *str2 == '\0')
	{
		return (0);
	}
	if (*str1 == *str2)
	{
		return (wildcmp((str1 + 1), (str2 + 1)));
	}
	if (*str2 == '*')
	{
	if (*(str2 + 1) == '*')
	{
		return (wildcmp(str1, (str2 + 1)));
	}
	else if (wildcmp(str1, str2 + 1))
	{
		return (1);
	}
	else
	{
		return (wildcmp(str1 + 1, str2));
	}
}
		return (0);
}

