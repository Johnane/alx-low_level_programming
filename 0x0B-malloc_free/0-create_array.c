#include "main.h"
#include "stdlib.h"

/**
 * create_array - create and iniatialize an array of c with a specific char
 * @size: size of the array
 * @c: char to initialize with
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for ( unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}





