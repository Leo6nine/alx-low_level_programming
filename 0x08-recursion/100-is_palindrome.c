#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: the string
 * Return: the string length
 */

int _strlen(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		i++;
		i += _strlen(s + i);
	}
	return (i);
}

/**
 * if_palindrome - check if a string is palindrome
 * @s: The string to check
 * @i: The length of the string
 * @j: The index of the string checked
 * Return: 0 or 1
 */

int if_palindrome(char *s, int i, int j)
{
	if (s[j] == s[i / 2])
		return (1);
	if (s[j] == s[i - j - 1])
		return (if_palindrome(s, i, j + 1));
	return (0);
}

/**
 * is_palindrome - checks if a strring is palindrome
 * @s: the string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int j = 0;
	int i = _strlen(s);

	if (!(*s))
		return (1);
	return (if_palindrome(s, i, j);
}
