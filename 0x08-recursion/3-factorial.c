#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: the number to return the factorial from
 *
 * Return: factorial of the given number
 */
int factorial(int n)
{       
        if (n == 0 || n == 1)
        {
                return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
