#include "main"
/**
 * rev_string - reverse strings
 * @s: string
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i;
	int n;
	char rv = s[0];

	while (s[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		n--;
		rv = s[i];
		s[i] = s[n];
		s[n] = rv;
	}
}
