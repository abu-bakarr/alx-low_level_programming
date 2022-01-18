#include "search_algos.h"
#include <math.h>
/**
 * min? (- return the min)?
 *
 * @a: int
 * @b: int
 * Return: a or b
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * jump_search? (- jump search)?
 *
 * @arr: the array to be searched
 * @n: array size
 * @val: the value to find
 * Return: n : index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = (int)sqrt(n), left = 0, right = 0, i = 0;

	while (left < (int)n && arr[left] <= val)
	{
		right = min(n - 1, left + jump);
		if (arr[left] <= val && arr[right] >= val)
			break;
		printf("Value checked array[%d] = [%d]\n", left, arr[left]);
		left += jump;
	}

	if (left >= (int)n || arr[left] > val)
	{
		printf("Value found between indexes [%d] and [%d]\n", right,
		       left);
		printf("Value checked array[%d] = [%d]\n", left - jump,
		       arr[left - jump]);
		return (-1);
	}

	right = min(n - 1, right);
	printf("Value checked array[%d] = [%d]\n", left, arr[left]);
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && arr[i] <= val; ++i)
	{
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);
		if (arr[i] == val)
			return (i);
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	printf("Value checked array[%d] = [%d]\n", i, arr[i]);
	return (-1);
}
