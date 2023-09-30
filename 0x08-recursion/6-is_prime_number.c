#include "main.h"
/**
 * is_prime_number - check if a number is a prime
 * @n: number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
/**
 * is_prime - calculates if a number is a prime recrsively
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if ((n % i) == 0 && i > 0)
	{
		return (0);
	}
	return (is_prime(n, i - 1));
}
