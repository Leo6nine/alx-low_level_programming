#include "main.h"

/**
 * print_square - squar printing
 * @size: square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				-putchar('#');
			}
			_putchar('\n');
		}
	}
}
