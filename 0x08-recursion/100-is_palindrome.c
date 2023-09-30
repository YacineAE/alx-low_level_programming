#include "main.h"

/**
 * check_pal - Checks the characters of a string recursively for palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_pal(char *s, int start, int end)
{
    // If the characters at start and end indices don't match, it's not a palindrome.
    if (s[start] != s[end])
        return (0);

    // If we've checked all characters or reached the middle, it's a palindrome.
    if (start >= end)
        return (1);

    // Recursively check the next characters towards the middle.
    return check_pal(s, start + 1, end - 1);
}

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    // Base case: If we reach the end of the string, return 0.
    if (*s == '\0')
        return (0);

    // Recursively add 1 to the length for each character.
    return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    // If the string is empty, it's a palindrome.
    if (*s == '\0')
        return (1);

    // Get the length of the string using _strlen_recursion.
    int len = _strlen_recursion(s);

    // Check if the string is a palindrome using check_pal function.
    return (check_pal(s, 0, len - 1));
}
