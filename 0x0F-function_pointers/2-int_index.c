#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - modifies the ith element of an array
 * @array: array to modify
 * @size: size of the array
 * @cmp: compare function to use
 * Return: index of the first element of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

