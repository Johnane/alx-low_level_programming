#include "main.h"

/**
 * _strlen_recursion - Prints the lenght
 * @s: Input String
 * Return: The Length
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}
