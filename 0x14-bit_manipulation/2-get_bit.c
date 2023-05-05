#include "main.h"


/**
 * get_bit - value of bit which given
 * @n: number
 * @index: o or 1
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{

int value_of_bit;

if (index > 63)
return (-1);

value_of_bit = (n >> index) & 1;

return (value_of_bit);
}
