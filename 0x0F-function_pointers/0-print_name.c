#include "function_pointers.h"

/**
 * print_name - print name
 * @name: the name which print
 * @f: the function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)
f(name);
}
