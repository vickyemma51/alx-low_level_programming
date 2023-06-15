#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: first string.
* @s2: second string.
* @n: integer
*
* Return: pointer of an array of chars
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n > j)
	{
		a = malloc((i + j + 1));
		if (a == NULL)
			return (NULL);
		for (k = 0; k < i; k++)
			a[k] = s1[k];

		b = j;
		for (j = 0; j <= b; k++, j++)
			a[k] = s2[j];
	}
	else
	{
		a = malloc((i + n + 1));
		if (a == NULL)
			return (NULL);
		for (k = 0; k < i; k++)
			a[k] = s1[k];

		for (j = 0; j < n; k++, j++)
			a[k] = s2[j];
	}
	a[k] = '\0';
	return (a);
}
