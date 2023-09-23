#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @str: the input string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 13;
		}
		if ((str[i] > 'z' && str[i] <= ('z' + 13)) || (str[i] > 'Z' && str[i] <= ('Z' + 13)))
		{
			str[i] = str[i] - 26;
		}
		i++;
	}
	return (str);
}
