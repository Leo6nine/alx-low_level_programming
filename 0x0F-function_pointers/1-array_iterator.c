#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as parameter
 * @array: pointer array
 * @size: size of array
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
