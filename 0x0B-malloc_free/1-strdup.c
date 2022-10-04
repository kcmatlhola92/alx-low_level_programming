#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string
 * Return: NULL if str is NULL
 * On success returns a pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int index, j;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
		;

	strout = (char *)malloc(sizeof(char) * (index + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= index; j++)
		strout[j] = str[j];

	return (strout);
}
