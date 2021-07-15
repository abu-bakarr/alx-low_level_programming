#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - concatenates two strings
 * @size: elements
 * @nmemb: size in bytes
 * Return: result or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_array;
	unsigned int i;

	my_array = malloc(nmemb * size);
	if (size == 0 || nmemb == 0 || malloc(nmemb * size) == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		my_array[i] = 0;
	return (my_array);
}
