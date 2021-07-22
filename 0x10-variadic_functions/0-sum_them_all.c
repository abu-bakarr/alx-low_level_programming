#include "variadic_functions.h"
/**
*sum_them_all - Sum of all its parameters.
*@n: Variable type const unsigned.
*Return: return resutl type int.
*/

int sum_them_all(const unsigned int n, ...)
{
/*Declaration of variable*/
	unsigned int i;
	va_list list;
	int sum;
 /* Initialize the argument list. */
	va_start(list, n);
/* Get the next argument value. */
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
/*Clean Up*/
	return (sum);
}
