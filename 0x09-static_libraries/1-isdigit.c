#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: input number
 * Return: 1 if is a number
 * 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
