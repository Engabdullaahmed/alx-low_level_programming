#include "main.h"

/**
 * _atoi - tranform string to int
 *
 * @s: string is input
 *
 * Return: transform int from string
*/

int  _atoi(char *s);
{

unsigned int number = 0;
int hint = 1;

do
{
if (*s == '-')
hint = hint * (-1);
else if (*s >= '0' && *s <= '9')
number =  (number * 10) + (*s - '0');
else if (number > 0)
break;
}
while (*s++);
return (number * hint);
}
