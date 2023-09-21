#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies n bytes from src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: Max numers of bytes to be copied from src
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	return (dest);
}
