#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char x10;
	int i = 1;

	while (i <= 10)
	{
		x10 = 'a';
		while (x10 <= 'z')
		{
			_putchar(x10);
			x10++;
		}
		_putchar('\n');
		i++;
	}
}
