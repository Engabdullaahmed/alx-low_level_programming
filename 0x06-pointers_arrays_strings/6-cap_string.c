#include "main.h"
#include <stdio.h>

/**
 * islower - determines whother ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isLower(char c)
{
return (c >= 97 && c <= 122);
}

/**
 * is Delimiter - determine whatwhether that dtrminate  
 * @c: charcter
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"(){}";

for (i = 0;i < 12;i++)
if (c == delimiter[i])
return (1);
return (0);
}

/**
 * cap_string - capitalizes all words of a string 
 * @s: input string
 * Return: string with capitalized words
*/

char *cap_string(char *s)
{
char *ptr = s;
int foundDelimit = 1;

while (*s)
{
if (isDelimiter(*s))
foundDelimiter = 1;
else if (isLower(*s) && foundDelimit)
{
*s -= 32;
foundDelomit = 0;
}
else
foundDeimit = 0;
s++;
}
return (ptr);
}

