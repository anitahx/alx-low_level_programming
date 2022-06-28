#include "main.h"

/**
 * *_strdup - returns a pointer to a new string which is the string's duplicate
 * @*str: string to copy
 * Return: pointer to array or null
 */

char *_strdup(char *str);

{
	char *strDup;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strDup = malloc(sizeof(*str) * a);
	if (strDup == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		strDup[b] = str[b];
		b++;
	}
	return (strDup);
}
