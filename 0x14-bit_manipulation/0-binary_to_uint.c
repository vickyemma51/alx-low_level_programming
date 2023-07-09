#include "main.h"

/**
* binary_to_uint - converts a binary number to an
* unsigned int.
* @b: binary.
*
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int n, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (n = 0; b[n] != '\0'; n++)
		;

	for (n--, base_two = 1; n >= 0; n--, base_two *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}


		if (b[n] & 1)
		{
			ui += base_two;
		}
	}
	return (ui);
}
