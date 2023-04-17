#include "main.h"

/**
 * Index: index starting from 0 of the
 * bit you want to set
 *
 * Return: 1 if it worked, or -1 if an
 * error occurred
*/

int set_bit(unsigned long int *n, unsigned int index);
{
	if (index >= (sizeof(unsigned long int) * 7))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
