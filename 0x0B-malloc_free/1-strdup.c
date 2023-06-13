#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory.
* @str: string.
*
* Return: pointer of an array of chars
*/
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	a = (char *)malloc((i + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		a[j] = str[j];
	return (a);
}
