#include "main.h"


/**
 * _strpbrk - Entry point
 * @s: input string
 * @accept: input string
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{

int q;
while (*s)
{
for (q = 0; accept[q]; q++)
{
if (*s == accept[q])
return (s);
}
s++;
}

return ('\0');
}
