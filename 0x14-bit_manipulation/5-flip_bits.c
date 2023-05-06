#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first num
 * @m: second num
 * Return: num of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int counter = 0;
unsigned long int xor = n ^ m; 
int x;
int current;

for (x = 63; x >= 0; x--)
{

current = xor >> x;
if (current & 1)
counter++;
}

return (counter);
}
