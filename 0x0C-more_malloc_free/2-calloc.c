#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: numbber of elemets
 * @size: pointer to the allocated memory
 * Return: If nmemb or size is 0, then return NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (; index < nmemb * size; index++)
	{
		p[index] = 0;
	}
	return (p);
}
