#include "search_algos.h"
/**
 *@arr: the array to be searched
 * @l: the left index
 * @r: the right index
 * @val: the value to find
 */
int _binar(int *arr, int l, int r, int val)
{
	int i = l, mid = l + (r - l) / 2;

	if (r >= l)
	{
		printf("Searching in array: ");
		for (; i < r + 1; i++)
		{
			if (i == r)
				printf("%d\n", arr[i]);
			else
				printf("%d, ", arr[i]);
		}
		if (arr[mid] == val)
			return (mid);
		if (arr[mid] > val)
			return (_binar(arr, 0, mid - 1, val));
		return (_binar(arr, mid + 1, r, val));
	}
	return (-1);

}
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
 * exponential_search? (- exponential search)?
 *
 * @arr: the array to be searched
 * @sz: the left index
 * @val: the value to find
 * Return: n : index
 */
int exponential_search(int *arr, size_t sz, int val)
{
	int  mini = 1, maxi = 0;

	if (!arr)
		return (-1);
	while (mini < (int)sz && arr[mini] < val)
	{
		printf("Value checked array[%d] = [%d]\n", mini, arr[mini]);
		mini *= 2;

	}
	if (min(mini - 1, sz) >= (int)sz / 2)
		maxi = min(mini - 1, sz);
	else
		maxi = min(mini, sz);
	printf("Value found between indexes [%d] and [%d]\n",
	       mini / 2, maxi);
	return (_binar(arr, mini / 2, maxi, val));

}
