#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string 1 + string 2
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	result = malloc((len1 + len2 + 1) * sizeof(s1));
	if (result == NULL)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	return (result);
}
