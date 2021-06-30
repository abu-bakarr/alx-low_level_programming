#include "holberton.h"

/**
 * *_strncat - function being used for project 1.
 *
 * @dest: is the char 1.
 *
 * @src: is the char 2.
 *
 * @n: is the integer.
 *
 * Return: - zero/NULL.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int i;

	for (c = 0; dest[c]; c++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';

	return (dest);
}
