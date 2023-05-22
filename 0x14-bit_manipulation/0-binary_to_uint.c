#include "main.h"
//
//binary_to_uint - converts to an unsigned int
//from a binary number.
//@b: binary
//Return: unsigned int.
//

unsigned int binary_to_uint(const char *b)
{
unsigned int p;
int pen, base_two;

if (!b)
	return (0);

p = 0;
 for (pen = 0; b[pen] != '\0'; pen++);
 for (pen--, base_two = 1; pen >= 0; pen--, base_two *= 2)
 {
 if (b[pen] != '0' && b[pen] != '1')
 {
 return (0);
 }
 if (b[pen] & 1)
 {
 p += base_two;
 }

 }

 return (p);
}
