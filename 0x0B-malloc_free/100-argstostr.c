#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* argstostr - function to concatenate 2 strings
* @ac: number of arguments
* @av: vector of arguments
* Return:  or NULL
*/
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, len++)
		for (j = 0; av[i][j]; j++, len++)
		{}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
	}
	str[k] = '\0';
	return (str);
}
