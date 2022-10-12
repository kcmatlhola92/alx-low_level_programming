#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: input integer array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1 and If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
			if (cmp(array[index]))
				return (index);
	}
	return (-1);
}
