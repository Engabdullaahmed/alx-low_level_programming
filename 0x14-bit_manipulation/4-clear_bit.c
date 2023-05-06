#include "main.h"

/**
 * clear_bit - sets the value of bit
 * @n: pointer  num
 * @index: index (starting from 0)
 * Return: 1 if  work  -1 if there error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{


if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
