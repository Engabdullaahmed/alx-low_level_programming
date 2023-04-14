#include "main.h"

/**
 * *malloc_checked - allocate memory by malloc
 * @b: int
 * Return: pointer which array is initilaized or not
 */

void *malloc_checked(unsigned int b)
{
int *q = malloc(b);


if (q == NULL)
exit(98);
return (q);
}
