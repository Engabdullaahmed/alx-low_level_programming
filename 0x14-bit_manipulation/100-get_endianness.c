#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big end, 1 if little
 */

int get_endianness(void)
{

unsigned long int m = 1;
return (*(char *)&m);
}
