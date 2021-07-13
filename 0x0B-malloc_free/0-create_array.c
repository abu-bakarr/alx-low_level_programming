#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Function that creates an array of chars
 * @size: Variable type int
 * @c: Variable type char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
	{
		array = malloc(sizeof(char) * size);

		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				array[i] = c;

			return (array);
		}
	}
	else
	{
		return (NULL);
	}
}
