#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all inputted numbers
 * @n: number of arguments
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(all, n);

	for (i = 0; i < n; i++)
		sum += va_arg(all, int);
	va_end(all);

	return (sum);
}

