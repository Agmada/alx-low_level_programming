#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits 
 * @index: index which to check bit
 *
 * Return: the value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 9))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
