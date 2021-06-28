#include "holberton.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: a variable string as referencia
	*
	* Return: void
 */

void rev_string(char *s)
{
	int i = 0, z = 0;
	char a, ze;
	/*char nully = '\0';*/

	while (*(s + i))
	{
		i++;
	}
	z = i - 1;

	i = 0;

	for (; z > i; z--)
	{
		a = *(s + i);
		ze = *(s + z);
		*(s + i++) = ze;
		*(s + z) = a;
	}
}
