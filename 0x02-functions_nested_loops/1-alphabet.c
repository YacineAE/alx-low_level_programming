#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
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
