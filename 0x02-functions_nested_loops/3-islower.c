#include "main.h"
/**
 * islower - check for lowercase character
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
