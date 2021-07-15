#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: result or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *result/*, *empty*/;

	i = j = k = 0;
/*	empty = "";*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	j++;
	result = malloc((i + n) * sizeof(*result) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[k] = s1[i];
		i++;
		k++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		result[k] = s2[j];
		j++;
		k++;
	}
	result[k] = '\0';
	return (result);
}
