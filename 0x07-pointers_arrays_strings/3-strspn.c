#include "main.h"

/**
 * _strspn - length of prefix string
 * @s: intput string
 * @accept: input string
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int stri = 0;
unsigned int acceptt = 0;

for (; s[stri] != '\0'; stri++)
{
for (; accept[acceptt] != s[stri]; acceptt++)
{
if (accept[acceptt] == '\0')
{
return (acceptt);
}
}
}
return (acceptt);

}
