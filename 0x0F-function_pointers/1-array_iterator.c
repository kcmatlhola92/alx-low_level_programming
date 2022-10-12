#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function given as a parameter
 * on each element of an array
 * @array: input integer array
 * @size: the size of the array
 * @action: a pointer to the function to be used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && action)
		for (index = 0; index < size; index++)
			action(array[index]);
}
