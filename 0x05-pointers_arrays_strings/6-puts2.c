#include "main.h"
/**
 * puts2 - Prints every other char
 * @str: String
 * Return: output
 */

void puts2(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
