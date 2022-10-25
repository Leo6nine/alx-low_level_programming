#include "main.h"
/**
 * swap_int - Swap the value of two int
 * @a: int a
 * @b: int b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
