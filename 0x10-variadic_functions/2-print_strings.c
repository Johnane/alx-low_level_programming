#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints inputed strings
 * @separator: separates words
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	char *words;

	va_start(all, n);
	i = 0;

	while (i < n)
	{
		words = va_arg(all, char *);
		if (words == NULL)
			printf("(nil)");
		else
			printf("%s", words);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(all);
}
