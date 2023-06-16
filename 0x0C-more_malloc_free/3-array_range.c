#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array of integers.
* @min: minimum value.
* @max: maximum value.
*
* Return: pointer to the newly created array.
* if min > max, returns NULL.
* if malloc fails, returns NULL.
*/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(((max - min) + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
			a[i] = min;
	return (a);
}
