#include "main.h"

/**
 * divisible - function to check if a num is divisible
 * @num: input integer
 * @div: divisor integer
 * Return: divisable para
 */

int divisible(int num, int div)
{
	if (div == num / 2)
		return (1);
	if (num % div == 0)
		return (0);
	return (divisible(num, div + 1));
}

/**
 * is_prime_number - checks for a prime num
 * @n: num to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divisible(n, div));
}
