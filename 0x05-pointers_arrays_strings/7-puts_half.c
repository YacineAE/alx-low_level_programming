#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int index;
	int i = (index / 2) + 1;

	index = strlen(str) - 1;
	while (i <= index)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
