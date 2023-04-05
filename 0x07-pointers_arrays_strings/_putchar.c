#include<unistd.h>

/**
 * _putchar - writes the charcter c
 * @c: The charcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, that's all
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
