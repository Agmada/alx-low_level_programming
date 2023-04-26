#include "variadic_functions.h"

/**
 * @n: number of arguments that were passed to the function
 * in the program
 * sum_them_up - calculates the sums of the parameters passed
 * 
 *
 * Return: the result
 */

int sum_them_all(const unsigned int n, ...);
{
	va_list lists;
	int sum = 0;
	unsigned int p;

		va_start(lists, n);
		for (p = 0; p < n; p++ )
			sum =+ va_arg(lists, sum);
		va_end(lists);
		retun(sum);
	}
