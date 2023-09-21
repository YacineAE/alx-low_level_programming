#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: the input string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') && (str[i + 1] >= 'a' && str[i +1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
