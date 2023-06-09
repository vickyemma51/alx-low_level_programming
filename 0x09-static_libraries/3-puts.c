#include "main.h"
/**
* _puts - prints a string, followed by a new line.
* @s: input string.
* Return: no return.
*/
void _puts(char *s)

{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[count]);
		count++;
	}
}

/**
* #include <stdio.h>
*
* main - Entry point
* _puts - prints a string, followed by a new line.
*
*
* Return: Always 0 (Success)
*
*
*int main(void)
*{
*	_puts("\"Programming is like building a multilingual puzzle");
*	return (0);
*}
*/
