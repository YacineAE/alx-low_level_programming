#include "main.h"
/**
 * void jack_bauer - every minute of the day of Jack Bauer
 *
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 60; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
