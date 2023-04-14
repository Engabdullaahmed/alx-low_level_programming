#include <stdlib.h>

#include "main.h"

/**
 * array_range - make arr
 * @min: minimum value
 * @max: maximum value 
 * Return: 1
 */

int *array_range(int min, int max)

{

int *ptr;
int q, size;



if (min > max)

return (NULL);



size = max - min + 1;


ptr = malloc(sizeof(int) * size);


if (ptr == NULL)

return (NULL);

for (q = 0; min <= max; q++)

ptr[q] = min++;

return (ptr);

}
