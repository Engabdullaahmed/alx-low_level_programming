#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{

while (*s != '\0')
{
_putchar(*s++);
}
_putchar('\n');
}
