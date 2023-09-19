#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int t;
	int a = 0;
	int z;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	z = len - 1;
	while (a < z)
	{
		t = s[a];
		s[a] = s[z];
		s[z] = t;
		a++;
		z--;
	}
}
