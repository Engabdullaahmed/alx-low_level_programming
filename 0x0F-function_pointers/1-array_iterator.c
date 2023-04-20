#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - that give each paramter of arr
 * @array: pointer of arr
 * size: unsign long long
 * @action: refer  pointer of function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
