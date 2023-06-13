#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings.
* @s1: first string.
* @s2: second string.
*
* Return: pointer of an array of chars
*/
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i + j + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		a[k] = s1[k];

	b = j;
	for (j = 0; j <= b; k++, j++)
		a[k] = s2[j];

	return (a);
}
