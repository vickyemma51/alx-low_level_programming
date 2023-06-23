#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_strings - function that prints strings,
* @separator: print separator string.
* @n: number od string
*
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	char *a;

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		a = va_arg(ap, char *);
		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");

		if (separator && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
