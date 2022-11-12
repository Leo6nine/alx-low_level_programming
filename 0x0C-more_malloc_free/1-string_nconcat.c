#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second String
 * @n: The amount of bytes
 * Return: Pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len = n, dex;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (dex = 0; s1[dex]; dex++)
		len++;
	conc = malloc(sizeof(char) * (len + 1));
	if (conc == NULL)
		return (NULL);
	len = 0;

	for (dex = 0; s1[dex]; dex++)
		conc[len++] = s1[dex];

	for (dex = 0; s2[dex] && dex < n; dex++)
		conc[len++] = s2
			[dex];

	conc[len] = '\0';
	return (conc);
}
