#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{

int x;
for (int i = 0; i < n-- ; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
}
}
