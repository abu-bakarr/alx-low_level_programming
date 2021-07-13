/**
 * _strlen - return length of string
 * @s: string being measured
 * Return: length of string
 */
#include "holberton.h"
int _strlen(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t += 1;
	}
	return (t);
}

/**
 * argstostr - concatenates all arguments
 * @ac: argument counter
 * @av: argument vector
 * Return: 0
 */
#include "holberton.h"
char *argstostr(int ac, char **av)
{
	int l, m;
	char *catstr;
	int start = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
		length += _strlen(av[l]);
	catstr = malloc(sizeof(char) * (length + ac + 1));
	if (catstr == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m] != '\0'; m++)
			catstr[start++] = av[l][m];
		catstr[start++] = '\n';
	}
	catstr[start] = '\0';
	return (catstr);
}
