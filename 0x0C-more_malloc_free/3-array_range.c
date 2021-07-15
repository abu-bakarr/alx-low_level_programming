#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Function that creates an array of integers.
 * @min: Variable type int
 * @max: Variable type int
 * Return: A pointer
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		while (min <= max)
		{
			a[i] = min;
			i++;
			min++;
		}
		return (a);
	}
}
