#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destLen = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}
	while (src[i] != '\0')
	{
		dest[destLen + i] = src[i];
		i++;
	}
	dest[destLen + i] = '\0';

	return (dest);
}
