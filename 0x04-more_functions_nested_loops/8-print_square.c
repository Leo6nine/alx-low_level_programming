#include "main.h"

/**
 * print_square - squar printing
 * @size: square
 */

void print_square(int size)
{

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			-putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');

}
