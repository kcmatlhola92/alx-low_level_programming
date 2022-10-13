#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
