#include <unistd.h>

/**
 * _putchar - writes the char c
 * @c: char which print
 * Return: 1 if success
 * on error return -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
