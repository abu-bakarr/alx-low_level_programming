#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts a character array to an integer
 *
 * Description: Respects leading '-' and '+' signs
 * integer inside string may be preceded by any number of non-integer values
 * but will only copy the first whole integer found.
 *
 * @s: character array to convert
 * Return: returns integer from array, returns 0 if none found
 */
int _atoi(char *s)
{
	int count = 0;
	int neg = -1;
	int rvalue = 0;

	for (; s[count] != '\0' && (s[count] < '0' || s[count] > '9'); count++)
		if (s[count] == '-')
			neg *= -1;
		for (; s[count] != '\0' && (s[count] >= '0' && s[count] <= '9'); count++)
			rvalue = (rvalue * 10) - (s[count] - '0');
	return  (rvalue * neg);
}
