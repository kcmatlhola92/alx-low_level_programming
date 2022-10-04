#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: string to be added after the 1st string
 * Return: pointer to the string
 */

char *str_concat(char *s1, char *s2)
{
	char *strdup;
	unsigned int index, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strdup = malloc(sizeof(char) * (index + j + 1));

	if (strdup == NULL)
	{
		free(strdup);
		return (NULL);
	}
	for (k = 0; k < index; k++)
		strdup[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strdup[k] = s2[j];

	return (strdup);
}
