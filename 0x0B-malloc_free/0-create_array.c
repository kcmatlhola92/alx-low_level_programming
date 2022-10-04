#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize with array
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		cr[index] = c;

	return (cr);
}
