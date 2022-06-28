
#include <stdlib.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: allocated memory space
 * @av: 2D array
 * Return: array
 */

char *argstostr(int ac, char **av)

{
	char *str;
	int i, j, a, b;
	i = 0;
	a = 0;
	b = 0;												
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	b++;
	}
	i++;
	}

	str = malloc(b *sizeof(char) + ac + 1);

	if (str == NULL)
	{
	return (NULL);
	}
	while (i < ac)
	{
	for (j = 0; av[i][j] != '\0'; j++, a++)
	{
	str[a] = av[i][j];
	}	
	str[a] = '\n';
	a++;
	i++;
	}
	str[a] = '\0';
	return (str);
}
