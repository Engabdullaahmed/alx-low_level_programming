#include "main.h"

/*
 * binary_to_uint - convert from binary to int
 * @b: pointer which string
 * Return: give int from binary
 */

unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int value_int = 0;

if (!b)
return (0);

for (x = 0; b[x]; x++)
{

if (b[x] != '0' && b[x] != '1')
return (0);

value_int = 2 * value_int + (b[x] - '0');
}
return (value_int);
}
