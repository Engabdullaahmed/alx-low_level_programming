#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{

int cnt = 0;

if (*s != '\0')
{
cnt += 1;
_strlen_recursion(s + 1);
}
}