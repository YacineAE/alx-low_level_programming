#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char eq = 'a';

	while (eq <= 'z')
	{
		if (eq != 'e' && eq != 'q')
		{
			putchar(eq);
		}
		eq++;
	}
	putchar('\n');
	return (0);
}
