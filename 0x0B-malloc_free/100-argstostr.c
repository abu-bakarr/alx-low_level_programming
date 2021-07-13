#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer with  a new string.
 */
char *argstostr(int ac, char **av)
{
	char  *concatenation;
	int i, j, lenconcatenation, len;

	i = j = lenconcatenation = len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;
	concatenation = malloc(len * sizeof(char));
	if (concatenation == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, lenconcatenation++)
			concatenation[lenconcatenation] = av[i][j];
		concatenation[lenconcatenation] = '\n';
		lenconcatenation++;
	}
	concatenation[lenconcatenation] = '\0';
	return (concatenation);
}
