#include"main.h"

/**
 * *create_array - creates an array of chars
 *  and initializes it with a specific char
 * @size: size of array
 * @c: int of char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{


char *o;
o = (char *)malloc(size * sizeof(char));

if (o == 0 || size == 0)
return (0);

while (size--)
o[size] = c;

return (o);
}
