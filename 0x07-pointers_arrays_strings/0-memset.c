#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of byte to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i;

        for (i = 0; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return s;
}
