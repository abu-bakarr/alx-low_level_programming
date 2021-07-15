#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Function that allocates memory for an array with malloc.
 * @nmemb: Variable type unsigned int
 * @size: Variable type unsigned int
 * Return: A pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(a, 0, (nmemb * size));

		return (a);
	}
}

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer type char
 * @b: VAriable type char
 * @n: Variable type int
 * Return: A pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
