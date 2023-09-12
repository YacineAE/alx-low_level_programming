#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowercase = 'a';
	
	while(lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	return (0);
}
