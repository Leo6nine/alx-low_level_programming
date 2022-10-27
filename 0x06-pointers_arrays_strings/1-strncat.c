#include "main.h"

/**
 * _strncat - concatinate 2 strings
 * @dest: copy to
 * @src: copy from
 * @n: the number of bytes to use from src
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	des[i] = '\0';
	return (dest);
}
