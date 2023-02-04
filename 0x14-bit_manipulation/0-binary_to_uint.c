#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to an integer
 * @b: the integer to convert
 * Return: The integer version
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int raised;
	int i;
	int slen;

	result = 0;
	raised = 1;
	i = 0;
	slen = strlen(b);

	if (b == NULL || b[i] < '0' || b[i] > '1')
		return (0);
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += raised;
		}
		raised *= 2;
	}
	return (result);
}
