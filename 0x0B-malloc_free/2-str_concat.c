#include "main.h"
#include <string.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: 0;
 */

char *str_concat(char *s1, char *s2)
{

int m = strlen(s1);
int n = strlen(s2);

c = malloc(x + y + 1);

if (!c)
return (0);

for (; s1[i]; i++)
{
c[i] = s1[i];
}
for (i = 0; s2[i]; i++)
{
c[i] = s2[i + x];
}
c[x + y] = '\0';
return (c);
}
