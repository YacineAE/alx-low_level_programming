#include "main.h"
/**
 * print_last_digit(int) - print the last digit of a number
 *
 * @n: number to be checked
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k = (n % 10);

	if (n < 0)
	{
		n = -n;
	}
	if (k < 0)
	{
		k = -k;
	}
	_putchar(k + '0');
	return (k);
}
