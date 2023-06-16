#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */

void simple_print_buffer(char *buffer, unsigned int size)
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
 *  * main - check the code for
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 10);
	i = 0;
	while (i < 10)
	{
		p[i++] = 10;
	}
	simple_print_buffer(p, 10);
	free(p);
	return (0);
}
