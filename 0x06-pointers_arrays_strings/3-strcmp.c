#include "holberton.h"
/**
 * _strcmp - function being used for project 1.
 *
 * @s1: is the char 1.
 *
 * @s2: is the char 2.
 *
 * Return: - zero/NULL.
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1; )
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
