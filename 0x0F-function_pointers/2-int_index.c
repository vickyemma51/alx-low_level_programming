#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: members of array
 * @size: number of element in array
 * @cmp: pointer to a function
 *
 * Return: -1 if no elements matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if ((cmp(array[i])) > 0)
			{
				j++;
				break;
			}
		}
	}
	if (j != 0)
		return (i);
	else
		return (-1);
}
