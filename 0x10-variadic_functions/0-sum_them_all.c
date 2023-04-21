#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of argument
 * @n: num of argument
 * @...: int
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{

va_list args;
unsigned int q;
unsigned int sum  = 0;


va_start(args, n);

for (q = 0; q < n ; q++)
{

sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
