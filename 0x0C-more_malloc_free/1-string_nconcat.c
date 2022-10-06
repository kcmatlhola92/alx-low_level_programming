#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: pointer to the fisrt string
 * @s2: pointer to the second string
 * @n: number of bytes from s1 and s2
 * Return: pointer to the resulting strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int index = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[index])
	{
		index++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		n = j;
	j = 0;
	s = malloc(sizeof(char) * (index + n + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < index; k++)
	{
		s[k] = s1[k];
	}
	for (; k < (index + n); k++)
	{
		s[k] = s2[k - index];
	}
	s[k] = '\0';
	return (s);
}

