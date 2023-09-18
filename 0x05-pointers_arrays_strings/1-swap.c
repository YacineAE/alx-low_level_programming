#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the values of two integers
 * @a: integer to be swaped to b
 * @b: integer to be swaped to a
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
