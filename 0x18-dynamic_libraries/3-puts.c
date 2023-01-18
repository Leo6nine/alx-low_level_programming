#include "main.h"
/**
 * _puts - Prints string
 * @str: String
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
