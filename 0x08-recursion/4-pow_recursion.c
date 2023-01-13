#include "main.h"

/**
 * _pow_recursion - Function to find power of a given number
 * @x: value to raise power
 * @y: power to raise to
 * Return: The raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
