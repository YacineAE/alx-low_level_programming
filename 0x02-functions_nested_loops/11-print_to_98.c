#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
        int i, j;

        if (n <= 98)
        {
                for (i = n; i <= 98; i++)
                {
                        if (i >= 10)
                        {
                                _putchar((i / 10) + '0');
                                _putchar((i % 10) + '0');
                        }
                        else
                        {
                                _putchar(n + '0');
                        }
                        if (i < 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
        }
        else
        {
                for (j = n; j >= 98; j--)
                {
                        if (j >= 10)
                        {
                                _putchar((j / 10) + '0');
                                _putchar((j % 10) + '0');
		}
                        else
                        {
                                _putchar(n + '0');
                        }
                        if (j > 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
        }
        _putchar('\n');
}

