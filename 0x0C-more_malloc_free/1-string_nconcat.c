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
	unsigned int i = n, dex;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (dex = 0; s1[dex]; dex++)
		i++;
	conc = malloc(sizeof(char) * (i + 1));
	if (conc == NULL)
		return (NULL);
	i = 0;

	for (dex = 0; s1[dex]; dex++)
		conc[i++] = s1[dex];
	for (dex = 0; s2[dex] && dex < n; dex++)
		conc[i++] = s2
			[dex];

	concat[i] = '\0';
	return (conc);
}
