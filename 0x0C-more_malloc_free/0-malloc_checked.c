#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: bytes allocated
 * Return: a pointer to the allocated memory
 * if malloc fails, termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(bytes);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
