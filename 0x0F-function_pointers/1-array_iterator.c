#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Calls a function to work on an array
 * @array: array to be used
 * @size: size of the array
 * @action: function to be called
 * Return: The result after function call
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
