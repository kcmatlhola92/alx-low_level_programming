#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size of bytes allocated in ptr
 * @new_size: the new memory block
 * Return: ptr If new_size == old_size do not do anything
 * If new_size > old_size,  memory should not be initialized
 * If ptr is NULL, then the call is equivalent to malloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
