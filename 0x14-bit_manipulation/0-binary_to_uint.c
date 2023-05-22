#include "main.h"
//
//binary_to_uint - converts to an unsigned int
//from a binary number.
//@b: binary
//Return: unsigned int.
//

unsigned int binary_to_uint(const char *b)
{
unsigned int pen;
int p, base_two;

if (!b)
pen = 0;	
	return (0);

 for (p = 0; b[p] != '\0'; p++);
 for (p--, base_two = 1; p >= 0; p--, base_two *= 2)
 {
 if (b[p] != '0' && b[p] != '1')
 {
 return (0);
 }
 if (b[p] & 1)
 {
 pen += base_two;
 }

 }

 return (pen);
}
