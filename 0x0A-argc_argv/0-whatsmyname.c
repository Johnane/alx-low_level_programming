#include <stdio.h>

/**
 * main - prints the programs name
 * @argc: argument count
 * @argv: argument vector (array of argument strings)
 * Return: 0 successful exit
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
