#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to calculate the natural square root of
 *
 * Return: natural square root of n, otherewise -1 
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return _sqrt_helper(n, 2);
}
/**
 * _sqrt_helper - recursive helper function to find the square root
 * @n: the number to calculate the natural square root of
 * @x: the current guess for the square root
 *
 * Return: The natural square root of n, or -1 if it doesn't have one
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, x + 1));
}
