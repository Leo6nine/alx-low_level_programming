#include "main.h"

/**
 * print_most_numbers - print numbers except for 2 & 4
 * Return: No return
 */

void print_most_numbers(void);
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}

	_putchar('\n');
}
