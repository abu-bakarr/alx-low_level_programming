#include "holberton.h"
#include <stdlib.h>

/**
 * _atoi -program that return an int number found inside a char
 * @s: inlet
 * Return: a2i
 */

int _atoi(char *s)
{
int a2i;
int min;
char *aux;
int flag = 0;


	aux = s;

	for (; *aux != '\0';)
	{
		if (*aux >= '0' && *aux <= '9')
			break;

		if (*aux == '-')
			min++;
		aux++;
	}

	for (; *s != '\0';)
	{
		if (*s >= '0' && *s <= '9')
		{
			a2i *= 10 + (*s - '0');
			flag = 1;
		}
		else
		{
			if (flag == 1)
				break;
		}
	s++;
	}
	if (min % 2 != 0)
		a2i = a2i * -1;
return (a2i);
}
