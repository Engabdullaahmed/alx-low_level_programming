#include "main.h"

/**
 * set_bit - sets the value of bit
 * @n: pointer  num
 * @index: index of the bit to set (starting from 0)
 * Return: 1 if  work or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{


if ( index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
