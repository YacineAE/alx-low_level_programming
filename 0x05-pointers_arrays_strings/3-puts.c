#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
