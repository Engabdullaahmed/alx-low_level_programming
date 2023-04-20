#include "function_pointers.h"


/**
 * int_index - give the index of the first element
 * @array: array
 * @size: int
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size ; i++)
if (cmp(array[i]))
{
return (i);
}
return (-1);
}
}
