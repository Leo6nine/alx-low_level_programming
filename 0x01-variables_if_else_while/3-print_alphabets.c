#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char alb;

	for (alb = 'a'; alb <= 'z'; alb++)
		putchar(alb);

	for (alb = 'A'; alb <= 'Z'; alb++)
		putchar(alb);

	putchar('\n');
	return (0);
}
