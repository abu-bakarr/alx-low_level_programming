#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - entry point
* @str: entry string
* Return: always success!!!
*/

char *_strdup(char *str)
{
	int counterA;
	int counterB;
	char *myarray;

	if (str == NULL)
		return (NULL);

	for (counterA = 0 ; str[counterA]  ; counterA++)
	{

	}

	myarray = malloc(sizeof(*myarray) * counterA + 1);

	if (myarray == NULL)
		return (NULL);

	for (counterB = 0 ; counterB <= counterA ; counterB++)
	{
		myarray[counterB] = str[counterB];
	}

	return (myarray);
}
