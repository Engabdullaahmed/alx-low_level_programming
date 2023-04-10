#include <stdio.h>

/**
 * _atoi - tranform string to int
 *
 * @s: string is input
 *
 * Return: transform int from string
*/

int _atoi(char *s)
{

unsigned int number = 0;
int hint = 1;

while (*s)
{
if (*s == '-')
{
hint = hint * (-1);
}
else if (*s >= '0' && *s <= '9')
{
number =  (number * 10) + (*s - '0');
if (*(s + 1) < '0' || *(s + 1) > '9')
{
break;
}
}
s++;
}
if (hint < 0)
{
number = -number;
}
return (number);
}
