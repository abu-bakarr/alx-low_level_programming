#include "search_algos.h"

/**
 * binary_search - search sorting array by repeatedly dividing in half
 * @array: list all the elements
 * @size: size of array or list
 * @value: matches with some value within array
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int minimun, maximum, i, k;

	minimun = 0;
	i = 0;
	maximum = size - 1;
	while (minimun <= maximum)
	{
		k = minimun;
		printf("Searching in array: ");
		while (k <= maximum)
		{
			printf("%d", array[k]);
			if (k + 1 <= maximum)
				printf(", ");
			k++;
		}
		printf("\n");

		i = ((maximum + minimun) / 2);
		if (array[i] == value)
			return (i);

		if (array[i] < value)
			minimun = i + 1;
		else
			maximum = i - 1;
	}
	return (-1);
}
