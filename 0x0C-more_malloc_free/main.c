#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */

void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	int *a;

	a = array_range(5, 10);
	simple_print_buffer(a, 6);
	free(a);
	return (0);
}
