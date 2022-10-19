#include "main.h"
/**
 * print_last_digit - the last digit of any number
 * @n: the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
