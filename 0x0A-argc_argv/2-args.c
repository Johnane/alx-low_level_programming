#include <stdio.h>

/**
 * main - prints the arguments it recieves
 * @argc: argument count
 * @argv: arguments itself
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	return (0);
}
