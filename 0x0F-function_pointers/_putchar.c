#include <unistd.h>

/**
 * _putchar - wriie the char
 * @c: the char
 * Return: 0
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
