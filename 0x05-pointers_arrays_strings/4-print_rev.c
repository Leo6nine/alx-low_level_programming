#include "main.h"
/**
 * print_rev - Prints in reverse
 * @s: String
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
