#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: Max of numbers of bytes to append from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
