#include "main.h"

/**
 * Write a program that prints _putchar,
 * followed by a new line.
 * And return:0
 */

int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
