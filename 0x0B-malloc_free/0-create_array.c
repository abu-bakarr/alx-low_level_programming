#include "holberton.h"
#include <stdlib.h>

/**
* create_array - entry point
* @size: size of string
* @c: entry character
* Return: always sucess!
*/

char *create_array(unsigned int size, char c)
{
	int counterA;
	char *myarray;

	if (size == 0)
	{
		return (NULL);
	}

	myarray = malloc(sizeof(*myarray) * size);

	if (myarray == NULL)
	{
		return (NULL);
	}


	for (counterA = 0 ; (unsigned int)counterA < size ; counterA++)
	{
		c = myarray[counterA];
	}

	return (myarray);
}
