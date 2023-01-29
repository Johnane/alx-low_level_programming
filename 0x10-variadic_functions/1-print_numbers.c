#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying amount of numbers
 * @separator: seperator
 * @n: n number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
