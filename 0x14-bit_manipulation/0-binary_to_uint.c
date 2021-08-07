#include "holberton.h"
/**
 * binary_to_uint - Function that converts a binary number to an uint
 *
 * @b: Pointer type char
 *
 * Return: The uint or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int base = 1, value = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
	}

	for (len--; len >= 0; len--)
	{
		if (b[len] == '1')
			value += base;

		base = base * 2;
	}

	return (value);
}
