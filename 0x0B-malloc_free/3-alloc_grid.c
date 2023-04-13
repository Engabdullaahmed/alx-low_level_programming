#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - Write a function that returns a pointer to a 2 dimensional array  * of integers
 * @width: array
 * @height: array
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **arr;

if (width < 1 || height < 1)
return (0);


arr = malloc(8 * height);
if (!arr)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(4 * width);
if (!arr[i])
{
while (i--)
free(arr[i]);
free(arr);
return (0);
}    
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
    
}
return (arr);
}

