#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size:  size, in bytes, of the allocated space for ptr
* @new_size:  new size, in bytes of the new memory block
*
* Return: return contents will be copied to the newly allocated space
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int **a;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc((old_size + new_size) * sizeof(int *));

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			a[i] = ptr;
	}
	else
	{
		for (i = 0; i < (old_size + new_size); i++)
			a[i] = ptr;
	}
	free(ptr);
	return (a);
}
