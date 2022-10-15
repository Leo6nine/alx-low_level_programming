#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print a number (n) if negative or positive or 0
 * Description: 'Checking n'
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
