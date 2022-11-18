#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function to print a name
 * @name: pointer
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
