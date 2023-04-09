#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: store memory
 *@src: copied memory
 *@n: number of bytes
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{


int q = 0;
int p = n;
for (; q < p; q++)
{
dest[q] = src[q];
n--;
}
return (dest);
}
