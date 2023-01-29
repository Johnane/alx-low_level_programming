#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all inputted numbers
 * @n: number of arguments
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, sum;

	i = 0;
	sum = 0;

	va_start(all, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(all, int);
	}
	va_end(all);
	return (sum);
}
