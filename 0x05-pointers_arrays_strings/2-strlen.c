#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - return the length of a string
 * @s: pointer to the string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
