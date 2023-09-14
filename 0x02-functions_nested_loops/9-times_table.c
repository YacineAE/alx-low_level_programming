#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
        	j = 0;
        	while (j < 10)
       		{
                	putchar((i * j) / 10);
                	putchar((i * j) % 10);
               		j++;
        	}
        	putchar('\n');
}
