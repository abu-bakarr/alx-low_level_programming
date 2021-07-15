#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: Pointer type char
 * @s2: Pointer type char
 * @n: Variable type unsigned int
 * Return: A pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, x, len1 = 0, len2 = 0, flag = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	a = malloc(sizeof(char) * (len1 + n + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		if (n >= len2)
			flag = len2;
		else
			flag = n;

		for (i = 0; i < len1; i++)
			a[i] = s1[i];

		for (x = 0; x < flag; x++, i++)
			a[i] = s2[x];

		a[i] = '\0';

		return (a);
	}
}
