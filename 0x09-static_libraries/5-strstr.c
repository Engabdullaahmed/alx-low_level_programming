#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input string
 * @needle: input string
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *y = needle;

while (*x == *y && *y != '\0')
{
y++;
x++;
}

if (*y == '\0')
return (haystack);
}

return (0);
}
