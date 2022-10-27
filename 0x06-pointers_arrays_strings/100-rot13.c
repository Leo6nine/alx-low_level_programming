#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string input
 * Return: string output
 */

char *rot13(char *s)
{
	int i, j;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s1[j] == *(s + i))
			{
				*(s + i) = s2[j];
				break;
			}
		}
	}
	return (s);
}
