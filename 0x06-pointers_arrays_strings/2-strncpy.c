#include "holberton.h"

/**
 * *_strncpy - function being used for project 1.
 *
 * @dest: is the char 1.
 *
 * @src: is the char 2.
 *
 * @n: is the integer.
 *
 * Return: - zero/NULL.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
