#include "main.h"
#include <stdio.h>

/*
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 *
 * Return: unsigned int.
 *

 unsigned int binary_to_uint(const char *b){
 	unsigned int num;
	int p;
	
	if (!b)
	num = 0;
		return (0);
	for (p = 0; b[p] != '\0'; = p++)
	{
	if (b[p] != '0' && b[p] != '1')
		return (0);
	}
	for (p = 0; b[p] != '\0'; p++)
	{
	num <<= 1;
	if (b[p] == '1')
		num += 1;
	}
 	return (num);
 }
