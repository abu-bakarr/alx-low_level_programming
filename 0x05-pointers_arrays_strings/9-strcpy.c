#include "holberton.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: a variable as referencia
	*
 * followed by a new line.
	* Return: none.
 */

int _strlen(char *s)
{
int i = 0; /* counter*/
char nully = '\0'; /* this is the last char as null*/
while (s[i] != nully)
i++;
return (i);
}
/**
 * _strcpy -  copy array
 * @dest: a variable string as referencia
	* @src: number to print
 * followed by a new line.
	* Return: none.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = _strlen(src);

	for (i = 0; i <= n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for (; i <= n; i++)
	dest[i] = '\0';
	return (dest);
}
