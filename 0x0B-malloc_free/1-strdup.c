#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new sting which is a copy another string
 * @str: original string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *new;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new = malloc(len * sizeof(*str));

	if (new == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
