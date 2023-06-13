#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars,
* @c: character to be printed
* @size: the size of the memory to print
*
* Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
