#include "main.h"

/**
 * print_line - print new line
 *
 *@n: num of char
*/
void print_line(int n)
{
int charlen = 1;
if (n <= 0)
{
_putchar('\n');
}
else
{

while (charlen <= n)
{
charlen++;
_putchar('_');
_putchar('\n');
}
}
}
