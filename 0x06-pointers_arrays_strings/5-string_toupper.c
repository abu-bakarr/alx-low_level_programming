#include "holberton.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @c: pointer to the string to convert
 * Return:- string conversion.
 */
char *string_toupper(char *c)
{
	int counter;

	counter = 0;
	for ( ; c[counter] != '\0'; counter++)
	{
		if (c[counter] >= 'a' && c[counter] <= 'z')
		{
			c[counter] -= 'a' - 'A';
		}
	}
	return (c);
}
