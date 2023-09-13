#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char lwcase;

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
	{
		_putchar(lwcase);
	}
	_putchar('\n');
}
