#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: address of first character in the string
 */
void _puts(char *str)
{
	while (*str)
	{
		_puts(*str);
		str++;
	}

	_puts('\n');
}
