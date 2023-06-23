#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - prints numbers.
* @separator: string to be printed between numbers.
* @n: number of integers passed to the function
*
* Return: no return.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;


	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
