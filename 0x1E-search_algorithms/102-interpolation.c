#include "search_algos.h"

/**
 * @array: array to look in to
 * @size: size of the array
 * @value: value to look for
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t height = size - 1;
	long int m;

	if (array == NULL || size <= 0)
		return (-1);

	while (array[height] != array[l])
	{
		m = l + ((double)(height - l) / (array[height] - array[l])) * (value - array[l]);
		if (m < 0 || m > (long int)size)
		{
			printf("Value checked array[%li] is out of range\n", m);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			height = m - 1;
	}

	if (array[l] == value)
		return (l);
	return (-1);
}
