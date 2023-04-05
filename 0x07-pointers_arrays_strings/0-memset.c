#include "main.h"

/**
 * _memset() - function that is used to fill a block of memory with parti value
 * @s: pointer to put the constant
 * @b: is constant
 * @n: max bytes which use
 * Return: s which use as pointer
 */

char *_memset(char *s, char b, unsigned int n)
{

unsign int xz;
for (xz = 0; n > 0; xz++, n--)
{
s[xz] = b;

}
return (s);
}
