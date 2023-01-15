#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies integers
 * @argc: argument count
 * @argv: arguments
 * Return: 0 for successful exit
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

