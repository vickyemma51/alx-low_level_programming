#include <stdio.h>

/*
* main - prints the number of arguments passed into it.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* i - automatic variable
* Return: 0 - success.
*/

int main(int argc, char *agrv[]__attribute__((__unused__)))
{
	int i;

	for (i = 0; i < argc; i++)
		;
	printf("%d\n", i - 1);
	return (0);
}
