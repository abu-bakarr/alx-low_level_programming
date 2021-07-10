#include "holberton.h"

/**
 * _isdigit - Check if a character is alphanumeric
 * @c: charachter to check
 *
 * Return: 1 if digit 0 else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
