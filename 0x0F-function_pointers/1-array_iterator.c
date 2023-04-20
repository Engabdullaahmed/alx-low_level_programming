#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - that give each paramter of arr
 * @array: pointer of arr
 * size: unsign long long
 * @action: refer  pointer of function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
