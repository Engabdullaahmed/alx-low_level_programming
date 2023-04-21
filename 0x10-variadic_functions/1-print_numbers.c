#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print numb
 * @separator: strinng between num
 * @n: int
 * @...: A variable number of numb
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
