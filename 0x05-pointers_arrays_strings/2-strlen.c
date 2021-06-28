#include "holberton.h"

/**
 * _strlen - accepts a string and finds its length
 *@s: accepted string pointer
 *Return: an int with the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0 ; *s != '\0' ; s++)
		i++;
	return (i);
}
