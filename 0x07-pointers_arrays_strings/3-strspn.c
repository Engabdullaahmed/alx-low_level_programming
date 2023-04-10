#include "main.h"

/**
 * _strspn - length of prefix string
 * @s: intput string
 * @accept: input string
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int stri;
unsigned int acceptt;

for (stri = 0; s[stri] != '\0'; stri++)
{
for (acceptt = 0; accept[acceptt] != s[stri]; acceptt++)
{
if (accept[acceptt] == '\0')

return (stri);

}
}
return (stri);

}
