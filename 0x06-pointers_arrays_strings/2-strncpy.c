#include "main.h"
/**
 * _strncpy - copy string from src to dest
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: Max number of bytes to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
