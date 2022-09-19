#include "main.h"
#include <stdio.h>

/**
 * _strcpy - string pointed to by src, including the terminating null byte.
 * buffer pointed to by dest.
 * @dest: destination of pointer to the string
 * @src: copies of the string pointed
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
