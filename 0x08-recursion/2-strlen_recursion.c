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
while (*s != 0)
{
cnt++;
cnt += _strlen_recursion(s + 1);

}
