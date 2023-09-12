#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lowercase = 'a';
	char Uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (Uppercase <= 'Z')
	{
		putchar(Uppercase);
		Uppercase++;
	}
	putchar('\n');
	return (0);
}
