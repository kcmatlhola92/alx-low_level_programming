#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: the pointer to dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
