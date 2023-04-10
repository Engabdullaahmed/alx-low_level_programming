#include "main.h"

/**
 * _strspn - length of prefix string
 * @s: intput string
 * @accept: input string
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int string;
unsigned int acceptt;

for (int string = 0; s[string] != '\0'; string++)
{
for (int acceptt = 0; accept[acceptt] != s[string]; acceptt++)
{
if (accept[acceptt] == '\0')
{
return (acceptt);
}
}
return (acceptt);
}
