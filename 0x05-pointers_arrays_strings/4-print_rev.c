#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print a string, in reverse, followed by a new line
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
