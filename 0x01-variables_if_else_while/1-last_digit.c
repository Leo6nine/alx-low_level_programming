#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, a};
	)
	else if (x == 0)
	{
		printf("The last digit of %d is %d and is zero\n", n, a};
	}
	else
	{
		printf("The last digit of %d is %d and less than 6 and not 0\n", n, a};
	}
	return (0);
}
