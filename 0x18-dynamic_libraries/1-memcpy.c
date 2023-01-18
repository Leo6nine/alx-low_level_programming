#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of byte
 * Return: Pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
