#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul = 0;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j]) < '0' || (argv[i][j]) > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
