#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - entry point
* @array: entry array
* @size: array size
* @action: funtion
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int counter;

	if (array && action != NULL)
	{
		for (counter = 0 ; counter < size ; counter++)
		{
			(*action) (array[counter]);
		}
	}
}
