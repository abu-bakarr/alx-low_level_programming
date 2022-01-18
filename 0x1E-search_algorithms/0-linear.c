#include "search_algos.h"

/**
 * @array: list all the elements
 * @size: size of array or list
 * @value: matches with some value within array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t item = 0;

	while (item < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)item, array[item]);
		if (array[item] == value)
		{
			return (item);
		}
		item++;
	}
	return (-1);
}
