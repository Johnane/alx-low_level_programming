#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: argument count
 * @argv: strings of array
 * Return: number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
