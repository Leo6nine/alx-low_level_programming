#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int tenX;
	char lc;

	for (tenX = 0; tenX < 10; tenX++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);

		_putchar('\n');
	}
}
