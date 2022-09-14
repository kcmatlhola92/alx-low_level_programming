#include "main.h"

/**
 * _abs - computes the absolute value of an integrer
 *
 * @n: the int to check
 *
 * Return: the absolute value of int
 */

int _abs(int n)
{
	if (n < 0)
	n = (-1) * n;
	return (n);
}
