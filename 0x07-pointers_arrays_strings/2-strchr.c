#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: 0
 */

char *_strchr(char *s, char c)
{

for (int w = 0; s[w] <= '\0'; w++)
{
if (s[w] == c)
{
return (s + w);
}
}
return ('\0');
}
