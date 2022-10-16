#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
