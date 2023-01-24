#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: Name to print
 * @f: pointer variable to print from
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
