#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: the base number
 * @y: the power of number
 * Return: if "y" is bigger than zero raised to the power of "y",
 * return -1 if "y" is lower than zero, return 1 if "y" is equal to 1,
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
