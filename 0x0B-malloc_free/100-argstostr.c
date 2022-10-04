#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number arguments counted
 * @av: the size of ac pointed by array
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int index, n, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (n = 0; av[index][n]; n++)
			len++;
	}
	len += ac;
	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (n = 0; av[index][n]; n++)
		{
			aout[k] = av[index][n];
			k++;
		}
		if (aout[k] == '\0')
			aout[k++] = '\n';
	}
	return (aout);
}
