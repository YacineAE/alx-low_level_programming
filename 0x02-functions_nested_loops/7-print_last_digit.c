#include "main.h"
/**
 * int print_last_digit(int) - print the last digit of a number
 *
 * @n: number to be checked
 *
 * return: value of the last digit
 */
int print_last_digit(int n)
{
	int k = (n % 10);

	if (n < 0)
	{
		n = -n;
	}
	_putchar(k + '0');
	return (k)
}
