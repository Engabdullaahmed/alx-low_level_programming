#include <stdlib.h>

#include "main.h"



/**
 * _memset - fills memory
 * @s: memory area
 * @b: char which copy
 * @n: num to copy
 * Return: 1
 */

char *_memset(char *s, char b, unsigned int n)

{

unsigned int o;

for (o = 0; o < n; o++)

{
s[o] = b;
}

return (s);

}

/**
 * _calloc - allocates memory
 * @nmemb: element num
 * @size: size of element
 * Return: 1
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

char *ptr;



if (nmemb == NULL || size == NULL)

return (0);


ptr = malloc(size * nmemb);


if (ptr == 0)

return (NULL);


_memset(ptr, 0, nmemb * size);


return (ptr);

}
