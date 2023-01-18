#include "main.h"

/**
 * _strncpy - copy a string of n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (n > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
