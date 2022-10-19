#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
}
