#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int poe = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	while (format && format[poe])
	{
		switch (format[poe])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				poe++;
				continue;
		}
		sep = ", ";
		poe++;
	}
	printf("\n");
	va_end(list);
}
