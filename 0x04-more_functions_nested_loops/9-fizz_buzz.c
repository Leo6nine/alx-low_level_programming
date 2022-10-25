#include "main.h"
/**
 * main - Print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int n;

	n = 1;

	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf(" FizzBuzz");
		if (n % 3 == 0)
			printf(" Fizz");
		if (n % 5 == 0)
			printf(" Buzz");
	}
	printf("\n");
	return (0);
}
