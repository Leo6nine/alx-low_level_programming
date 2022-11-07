#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Program that takes first two integer arguments
 *  @argc: Number of command line arguments
 *  @argv: Array name
 *  Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atol(argv[1]) * atol(argv[2]));
	return (0);
}
