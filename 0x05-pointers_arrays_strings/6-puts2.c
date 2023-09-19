#include "main.h"
#include <string.h>
/**
 * puts2 - print every other character of a string, starting with the first character
 * @str: pointer to the string
 */
void puts2(char *str)
{
	int i = 0;
	int index;

	index = strlen(str) - 1;
	while (i <= index)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
