#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print string
 * @separator: The string
 * @n: num of string
 * @...: num of variable
 * Description: the no fe
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *str;
unsigned int index;

va_start(args, n);

for (index = 0; index < n; index++)
{

str = va_arg(args, char *);


if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(args);
}
