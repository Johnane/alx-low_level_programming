#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of an integer
 * @n: the integer to print binary
 * Return: The binary of the integer
 */

void print_binary(unsigned long int n)
{
	int binary[32];
	int i;
	int j;

	i = 0;

	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j] + '0');
}
