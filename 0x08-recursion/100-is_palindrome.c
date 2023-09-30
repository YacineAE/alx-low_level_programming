#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = strlen(s);

    // Base case: an empty string or a single character is a palindrome
    if (length <= 1)
        return (1);

    // Compare the first and last characters of the string
    if (s[0] != s[length - 1])
        return (0);

    // Recursively check the substring without the first and last characters
    return is_palindrome(s + 1) && is_palindrome(s + length - 2);
}
