#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - splits a string into words
 * @s: evaluate the string
 * Return: next index to check of source string
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to new string
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int index, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (index = 0; index <= len; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (c)
			{
				end = index;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = index;
	}
	matrix[k] = NULL;
	return (matrix);
}
