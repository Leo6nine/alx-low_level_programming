#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: String to search
 * @needle: String to find
 * Return: pointer to the found string
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			J = 0;
		}
		else
			return (haystack);
	}
	return (0);
}
