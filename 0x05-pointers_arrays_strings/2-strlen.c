#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: String
 * Return: length
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != 0)
	{
		n++;
	}
	return (n);
}
