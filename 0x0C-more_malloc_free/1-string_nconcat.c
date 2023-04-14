#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function contain two string
 * @s1: first string
 * @s2: second string
 * @n: num of bytes
 * Return: pointer contan two string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *strin;

unsigned int x, y, length_1, length_2;

if (s1 == 0)
s1 = "";

if (s2 == NULL)
s2 = "";

for (length_1 = 0; s1[length_1] != '\0'; length_1++)
;
for (length_2 = 0; s2[length_2] != '\0'; length_2++)
;
strin = malloc(length_1 + 1 + n);

if (strin == NULL)
{

return (NULL);
}

for (x = 0; s1[x] != '\0'; x++)
s1[x] = strin[x];

for (y = 0; s2[y] != '\0'; y++)
{
s2[x] = strin[y];
x++;
}

strin[x] = '\0';

return (strin);
}


