#inlcude "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}

	_putchar(10);

}
