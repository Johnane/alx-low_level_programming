#include "main.h"

/**
 * factorial - Function to find factorial
 * @n: input int
 * Return: value of the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (n);
}

