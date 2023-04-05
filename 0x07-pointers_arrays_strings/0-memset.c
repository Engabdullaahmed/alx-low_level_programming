#include "main.h"

/**
 * _memset - function that is used to fill a block of memory with parti value
 * @s: pointer to put the constant
 * @b: is constant
 * @n: max bytes which use
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int xz;
for (xz = 0; xz < n; xz++)
{
s[xz] = b;
}
return (s);
}
