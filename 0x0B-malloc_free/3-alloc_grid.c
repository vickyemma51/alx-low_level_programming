#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array..
* @height: height of the array.
*
* Return: pointer of an array of integers
*
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	a = malloc(height * sizeof(int));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}
