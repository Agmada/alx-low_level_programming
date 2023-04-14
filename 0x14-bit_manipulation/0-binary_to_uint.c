#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 *
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p;
	int len, base_two;

	if (!b)
		return (0);

	p = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			p += base_two;
		}
	}

	return (p);
}
