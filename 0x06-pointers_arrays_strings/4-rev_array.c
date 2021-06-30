#include "holberton.h"

/**
 * reverse_array - function for project 4.
 *
 * @a: has the array to be reverse.
 *
 * @n: is the integer.
 */

void reverse_array(int *a, int n)
{
	int y;
	int rev = n - 1, counter = 0;

	for (; counter < rev; counter++, rev--)
	{
		y = a[counter];
		a[counter] = a[rev];
		a[rev] = y;
	}
}
