#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sums of the parameters passed
 * @n: number of arguments
 *
 *  return: the result
 */

int sum_them_all(const unsigned int n, ...);
{
	va_list lists;
	int sum;
	unsigned int p;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(lists, n);
	for (p = 0; p < n; p++)
		sum += va_arg(lists, int);
	va_end(lists);

	return(sum);
	}
