#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - check the code for Holberton School students.
* @argc: argument count.
* @argv: argument vector.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int num1, num2, cal = 0;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	cal = operation(num1, num2);
	printf("%d\n", cal);
	return (0);
}

