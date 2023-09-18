#include "main.h"
#include <stdio.h>

/**
 * reset_to_98: takes a pointer to an int as parameter and updates the value it points to to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int i = 98;

	n = &i;
	_putchar('n');
	_putchar('=');
	_putchar((*n / 10) + '0');
	_putchar((*n % 10) + '0');
	_putchar('\n');	
}
