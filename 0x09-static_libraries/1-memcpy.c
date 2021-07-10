#include "holberton.h"

/**
 * _memcpy - copy memory whit a constant byte
 * @dest: dest buffer to copy
 * @src: source to copy
 * @n: number of bytes
 *
 * Return: pointer to memory s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pdest = dest;
	char *psrc = src;

	for (i = 0; i < n ; i++)
		*(pdest + i) = *(psrc + i);

	return (dest);
}
