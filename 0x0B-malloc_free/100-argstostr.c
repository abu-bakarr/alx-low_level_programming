#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Function that concatenates arguments
 * @ac: Variable type int
 * @av: Pointer to pointer type char
 * Return: A pointer.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, x = 0, len = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0, len = 0; i < ac; i++, len++)
		{
			for (x = 0; av[i][x] != '\0'; x++, len++)
				;
		}

		a = malloc(sizeof(char) * (len + 1));

		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0, len = 0; i < ac; i++, len++)
			{
				for (x = 0; av[i][x] != '\0'; x++, len++)
					*(a + len) = av[i][x];
				*(a + len) = '\n';
			}
			*(a + len) = '\0';
			return (a);
		}
	}
}
